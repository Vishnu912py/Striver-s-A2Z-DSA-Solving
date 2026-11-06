#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int start = 0;
        int end = nums.size() - 1;
        int ind = -1;
        int target = x;
        int floor;
        int ceil;
        int found = 0;
        // floor
        while(start <= end){
            int mid = start + (end-start)/2;

            if(nums[mid] < target){
                start = mid+1;
                floor = nums[mid];
            }

            else if(nums[mid] > target){
                end = mid-1;
                ceil = nums[mid];
            }

            else{
                return {x,x};
                
            }
        }
        return {floor,ceil};
        

    }
};

int main() {
    vector<int> arr = {19,34,213,261,271,361,467,570,572,621,644,661,691,712,720,741,758,793,934,964,969};
    cout << arr.size() << endl;
    vector<int> res;
    Solution s;
    res = s.getFloorAndCeil(arr,521);
    for(int i=0;i<res.size();i++){
        cout << res[i] << "->";
    }
    return 0;
}