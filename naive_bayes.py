import csv

class CategoricalNaiveBayesFromScratch:
    def __init__(self, alpha=1.0):
        self.alpha = alpha # Laplace smoothing parameter
        self.class_priors = {}
        self.feature_probs = {}
        self.classes = []
        self.feature_names = []

    def fit(self, data, target_col):
        self.feature_names = [key for key in data[0].keys() if key != target_col]
        total_samples = len(data)
        
        # 1. Extract unique classes (e.g., 'yes', 'no')
        self.classes = list(set(row[target_col] for row in data))
        
        # 2. Calculate Class Priors: P(C) = count(C) / total_samples
        class_counts = {c: sum(1 for row in data if row[target_col] == c) for c in self.classes}
        for c in self.classes:
            self.class_priors[c] = class_counts[c] / total_samples

        # 3. Calculate Conditional Probabilities with Laplace Smoothing
        self.feature_probs = {feat: {} for feat in self.feature_names}
        
        for feat in self.feature_names:
            unique_vals = list(set(row[feat] for row in data))
            num_unique_vals = len(unique_vals)
            
            for val in unique_vals:
                self.feature_probs[feat][val] = {}
                for c in self.classes:
                    match_count = sum(1 for row in data if row[feat] == val and row[target_col] == c)
                    prob = (match_count + self.alpha) / (class_counts[c] + self.alpha * num_unique_vals)
                    self.feature_probs[feat][val][c] = prob

    def explain_sample(self, sample):
        """Displays individual prior and conditional probabilities for a sample."""
        print(f"\n--- Probability Breakdown for Sample: {sample} ---")
        
        for c in self.classes:
            print(f"\nTarget Class: '{c.upper()}'")
            print(f" -> Prior Probability P(C='{c}'): {self.class_priors[c]:.4f}")
            
            for feat in self.feature_names:
                val = sample.get(feat)
                if val in self.feature_probs[feat]:
                    prob = self.feature_probs[feat][val][c]
                    print(f" P({feat} = '{val}' | '{c}'): {prob:.4f}")
                else:
                    print(f" P({feat} = '{val}' | '{c}'): [Unseen feature - using smoothing]")

    def predict_proba(self, sample):
        probabilities = {}
        for c in self.classes:
            prob = self.class_priors[c]
            for feat in self.feature_names:
                val = sample.get(feat)
                if val in self.feature_probs[feat]:
                    prob *= self.feature_probs[feat][val][c]
                else:
                    num_unique_vals = len(self.feature_probs[feat])
                    prob *= self.alpha / (self.alpha * num_unique_vals)
            probabilities[c] = prob
        return probabilities

    def predict(self, sample):
        probs = self.predict_proba(sample)
        return max(probs, key=probs.get)


# --- Execution Program ---

def load_dataset_from_csv(filename):
    dataset = []
    with open(filename, mode='r', encoding='utf-8') as file:
        reader = csv.DictReader(file)
        for row in reader:
            dataset.append(row)
    return dataset

# 1. Load dataset from CSV
csv_filename = 'buys_computer.csv'
dataset = load_dataset_from_csv(csv_filename)

# 2. Initialize and train model
model = CategoricalNaiveBayesFromScratch(alpha=1.0)
model.fit(dataset, target_col='Buys_Computer')

# 3. Test sample
test_sample = {
    'Age': 'youth', 
    'Income': 'medium', 
    'Student': 'yes', 
    'Credit_Rating': 'fair'
}

# 4. Display individual conditional probabilities
model.explain_sample(test_sample)

# 5. Final Prediction
prediction = model.predict(test_sample)
probabilities = model.predict_proba(test_sample)

print(f"\n==============================")
print(f"Predicted Class: **{prediction.upper()}**")
print("==============================\nFinal Calculated Scores:")
for c, p in probabilities.items():
    print(f" - Class '{c}': {p:.6f}")