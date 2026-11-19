#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
   int minimumRateToEatBananas(vector<int> nums, int h) {
        int start = 1;
        int n = nums.size();
        int end = 0;
        int answer = 0;

        for(int i=0;i<n;i++){
            if(end < nums[i]){
                end = nums[i];
            }
        }
        

        while(start<=end){
            int mid = start + (end-start)/2;
            long long hours_to_complete = 0;
            for(int i=0;i<n;i++){
                hours_to_complete += (nums[i] + mid - 1) / mid;
            }

            if(hours_to_complete <= h){
                answer = mid;
                end = mid-1;
            }
            else {
                start = mid+1;
            }
        }

        return answer;
    }
};


int main() {
    vector<int> nums = {30,11,23,4,20};
    int n;
    cin >> n;
    int h;
    cin >> h;

    Solution sol;
    cout << sol.minimumRateToEatBananas(nums,h) << endl;

    
    return 0;
}