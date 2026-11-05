#include <iostream>
#include <vector>
using namespace std;


class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int start = 0;
        int end = nums.size() - 1;
        int ind = -1;
        int target = x;
        int found = 0;

        while(start <= end){
            int mid = start + (end-start)/2;

            if(nums[mid] >= target){
                end = mid-1;
                ind = mid;
            }

            else if(nums[mid] < target){
                start = mid+1;
            }

            else{
                ind = mid;
                found == 1;
                break;
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
    vector<int> nums = {1,2,2,2,3};

    int cnt = s.lowerBound(nums,2);
    cout << cnt << endl;
    return 0;
}