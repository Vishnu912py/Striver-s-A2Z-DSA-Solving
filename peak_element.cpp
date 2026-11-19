#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak_index = -1;
        for(int i=0;i<nums.size();i++){
            if(i==0 && i+1 < nums.size() && nums[i+1] < nums[i]){
                peak_index = i;
            }
            else if(i==nums.size()-1 && i-1 > -1 && nums[i-1] < nums[i]){
                peak_index = i;
            }
            else if(nums[i-1] < nums[i] && nums[i+1] < nums[i]){ 
                peak_index = i;
            }
            else{
                continue;
            }
        }

        return peak_index;
    }
};

int main() {

    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};
    Solution sol;
    cout << sol.findPeakElement(nums) << endl;
    
    return 0;
}