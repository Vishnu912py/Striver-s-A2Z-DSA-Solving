#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() -1;
        int found = 0;
        int index = -1;
        while(start <= end){
            int mid = start + (end-start)/2;

            if(nums[mid] > target){
                end = mid -1;
                index = end;
            }

            else if(nums[mid] < target){
                start = mid + 1;
                index = start;
            }

            else{
                found = 1;
                index = mid;
                break;
            }
        }

        cout << index << endl;
        if(found ==1){
            return index;
        }
        else{
            if(index==0 && target<nums[index]){
                return 0;
            }
            else if(index>0 && target<nums[index] ){
                return index-1;
            }
            else if(target>nums[index]){
                return index+1;
            }
            else{
                return -1;
            }
        }

       
    }
};

int main() {

    vector<int> arr = {1};
    int target = 0;
    Solution sol;
    cout << sol.searchInsert(arr,target) << endl;
    
    return 0;
}