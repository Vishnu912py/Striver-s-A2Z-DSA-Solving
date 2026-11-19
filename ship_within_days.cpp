#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
int shipWithinDays(vector<int>& weights, int days) {
        int start = *max_element(weights.begin(), weights.end());
        int end = 0;
        for (int weight : weights) {
            end += weight;
        }

        while (start < end) {
            int capacity = start + (end - start) / 2;
            int requiredDays = 1;
            int currentLoad = 0;

            for (int weight : weights) {
                if (currentLoad + weight > capacity) {
                    requiredDays++;
                    currentLoad = 0;
                }
                currentLoad += weight;
            }

            if (requiredDays <= days) {
                end = capacity;
            } else {
                start = capacity + 1;
            }
        }

        return start;
  }
};


int main() {

    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days;
    cin >> days;

    Solution sol;
    cout << sol.shipWithinDays(weights,days) << endl;
    
    return 0;
}