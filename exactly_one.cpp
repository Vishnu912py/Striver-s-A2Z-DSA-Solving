#include <bits/stdc++.h>
#include <vector>

using namespace std;

// 12/18 testcases worked out(Attempt 1)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int start = 0;
        int end = nums.size() -1;

        while(start <= end){
            int mid = start + (end-start)/2;

            if(mid > 0 && mid < nums.size()-1 && nums[mid-1] != nums[mid] && nums[mid+1] != nums[mid]){
                return nums[mid];
            }

            else if(mid == start && mid-1<start){
                return nums[mid+1];
            }

            else if(mid == 0 && end == 0){
                return nums[mid];
            }

            else if(mid == 0 && nums[mid+1] != nums[mid]){
                return nums[mid];
            }

            else if(mid == nums.size() -1 && nums[mid-1] != nums[mid]){
                return nums[mid];
            }

            else if(mid-1 >= 0 && nums[mid-1] == nums[mid]){
                if(((mid-start)+1)%2 == 0){
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
            }

            else if(mid+1 <= nums.size()-1 && nums[mid+1] == nums[mid]){
                if(((end-mid)+1)%2 == 0){
                    end = mid-1;
                }
                else{
                    start = mid+1;
                }
            }
        }

        return -1;
    }
};

int main() {
    vector<int> nums = {1,1,2,2,3};
    Solution sol;

    cout << sol.singleNonDuplicate(nums) << endl;
    
    return 0;
}