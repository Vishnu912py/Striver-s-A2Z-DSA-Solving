#include <iostream>
#include <vector>
using namespace std;

// Struct to hold both lookup arrays
struct NextIndices {
    std::vector<int> pos;
    std::vector<int> neg;
};

NextIndices precomputeNextElements(const std::vector<int>& arr) {
    int n = arr.size();
    NextIndices next_idx;
    next_idx.pos.assign(n, -1);
    next_idx.neg.assign(n, -1);
    
    int last_pos_seen = -1;
    int last_neg_seen = -1;
    
    // Single backward traversal computes both in O(n) time
    for (int i = n - 1; i >= 0; --i) {
        next_idx.pos[i] = last_pos_seen;
        next_idx.neg[i] = last_neg_seen;
        
        if (arr[i] > 0) {
            last_pos_seen = i;
        } else if (arr[i] < 0) {
            last_neg_seen = i;
        }
    }
    
    return next_idx;
}

int main() {
    std::vector<int> arr = {-1, -2, 3, -4, 5, -6};
    
    // Precompute both in one go
    NextIndices lookups = precomputeNextElements(arr);
    
    for(int i=0;i<arr.size();i++){
        cout << lookups.neg[i] << " ";
    }
    cout << endl;
    for(int i=0;i<arr.size();i++){
        cout << lookups.pos[i] << " ";
    }
    vector<int> visited(5,0);
    vector<int> result;
    int i=0;
    int j=0;
    
    
    
    return 0;
}