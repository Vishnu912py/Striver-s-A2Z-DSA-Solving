#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        vector<int> result;
        int start = 0;
        int end = nums.size() - 1;
        int ind = -1;
        int target = x;
        int found = 0;
        int floor;
        int ceil;
        // floor
        while(start <= end){
            int mid = start + (end-start)/2;

            if(nums[mid] == target){
                start = mid+1;
            }

            else if(nums[mid] < target){
                start = mid+1;
            }

            else{
                end = mid-1;
                ind = mid;
                
            }
        }
        if(ind == -1){
            return nums.size();
        }
        else{
            return ind;
        }
    }
};

int main() {
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    vector<int> res;
    Solution s;
    res = s.getFloorAndCeil(arr,5);
    for(int i=0;i<res.size();i++){
        cout << res[i] << "->";
    }
    return 0;
}