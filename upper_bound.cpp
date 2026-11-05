#include <iostream>
#include <vector>
using namespace std;


class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int start = 0;
        int end = nums.size() - 1;
        int ind = -1;
        int target = x;
        int found = 0;

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
    Solution s;
    vector<int> nums = {3,5,8,15,19};

    int cnt = s.upperBound(nums,9);
    cout << cnt << endl;
    return 0;
}