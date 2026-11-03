#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    vector<int> digit;
    vector<int> res;
    int n;
    cout << "Enter the length of the arr: " << endl;
    cin >> n;
    
    for(int i=0;i<n;i++){
        int in1;
        cin >> in1;
        digit.push_back(in1);
    }

    Solution sol;
    res = sol.plusOne(digit);

    for(int i=0;i<res.size();i++){
        cout << res[i] << "->";
    }
    
    return 0;
}