#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  int smallestDivisor(vector<int> &nums, int limit) {
        int start=1;
        int max = INT_MIN;
        for(int j=0;j<nums.size();j++){
            if(nums[j] > max){
                max = nums[j];
            }
        }
        int end = max;
        int smallest = INT_MAX;
        while(start <= end){
            int mid = start + (end-start)/2;
            int sum = 0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]%mid == 0){
                    sum += nums[i]/mid;
                }
                else{
                    sum += nums[i]/mid +1;
                }
                
            }
            if(sum <= limit){
                smallest = mid;
                end = mid-1;
            }
            else if(sum > limit){
                start = mid+1;
            }

        }

        return smallest;


  }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int limit;
    cin >> limit;

    Solution sol;
    cout << sol.smallestDivisor(nums,limit) << endl;
    return 0;
}