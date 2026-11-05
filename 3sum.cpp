#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        vector<vector<int>> result;
        sort(arr.begin(), arr.end());

        if (arr.size() < 4) {
            return result;
        }

        for (size_t i = 0; i + 3 < arr.size(); i++) {
            if (i > 0 && arr[i] == arr[i - 1]) {
                continue;
            }

            for (size_t j = i + 1; j + 2 < arr.size(); j++) {
                if (j > i + 1 && arr[j] == arr[j - 1]) {
                    continue;
                }

                size_t index1 = j + 1;
                size_t index2 = arr.size() - 1;
                while (index1 < index2) {
                    long long sum = static_cast<long long>(arr[i]) + arr[j]
                        + arr[index1] + arr[index2];
                    if (sum < target) {
                        index1++;
                    } else if (sum > target) {
                        index2--;
                    } else {
                        result.push_back({arr[i], arr[j], arr[index1], arr[index2]});
                        index1++;
                        index2--;
                        while (index1 < index2 && arr[index1] == arr[index1 - 1]) {
                            index1++;
                        }
                        while (index1 < index2 && arr[index2] == arr[index2 + 1]) {
                            index2--;
                        }
                    }
                }
            }
        }

        return result;
    }
};

int main() {
    vector<int> arr={1,-2,3,5,7,9};
    int target = 7;
    vector<vector<int>> res;
    Solution s;
    res = s.fourSum(arr,target);

    for (size_t i = 0; i < res.size(); i++) {
        for (size_t j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}