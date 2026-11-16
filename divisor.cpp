#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int smallestDivisor(vector<int> &nums, int limit) {
       int k=1;

       while(true){
            int sum=0;
            for(int i=0;i<nums.size();i++){
                int q = nums[i]%k;
                if(q == 0){
                    sum += nums[i]/k;
                }
                else{
                    sum += nums[i]/k +1;
                }
                
            }

            if(sum <= limit){
                return k;
            }
            else{
                k++;
            }
       }
            

    }
};

int main() {
    vector<int> nums = {8,4,2,3};
    int limit;
    cin >> limit;

    Solution sol;
    cout << sol.smallestDivisor(nums,limit);
    return 0;
}