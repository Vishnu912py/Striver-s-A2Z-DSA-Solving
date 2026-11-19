#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
int minDays(vector<int>& bloomDay, int k, int m) {
        long long int n = bloomDay.size();
        if(m*k <= n){
            int start = 1;
            long long int end = *(max_element(bloomDay.begin(),bloomDay.end()));
            long long int min_days = 1;
            while(start <=end){
                int mid = start + (end-start)/2;
                int count =0;
                int bouquet_formed = 0;
                for(long long int i=0;i<n;i++){
                    if(bloomDay[i] <= mid){
                        count ++;
                    }
                    else{
                        count = 0;
                    }
                    if(count == k){
                        count = 0;
                        bouquet_formed++;
                        
                    }

                    if(bouquet_formed == m){
                            break;
                    }
                    
                }

                if(bouquet_formed == m){
                    min_days = mid;
                    end = mid-1;
                }

                else if(bouquet_formed < m){
                    start = mid + 1;

                }

            }

            return min_days;
        }

        else{
            return -1;
        }
  }
};





/*
class Solution {
public:
int roseGarden(int n,vector<int>& nums, int k, int m) {
        if(m*k <= n){
            int start = 1;
            long long int end = *(max_element(nums.begin(),nums.end()));
            long long int min_days = 1;
            while(start <=end){
                int mid = start + (end-start)/2;
                int count =0;
                int bouquet_formed = 0;
                for(long long int i=0;i<n;i++){
                    if(nums[i] <= mid){
                        count ++;
                    }
                    else{
                        count = 0;
                    }
                    if(count == k){
                        count = 0;
                        bouquet_formed++;
                        
                    }
                    if(bouquet_formed == m){
                            break;
                    }
                }

                if(bouquet_formed == m){
                    min_days = mid;
                    end = mid-1;
                }

                else if(bouquet_formed < m){
                    start = mid + 1;

                }

            }

            return min_days;
        }

        else{
            return -1;
        }
  }
};

*/



int main() {

    vector<int> nums = {1,10,3,10,2};
    int k;
    int m;
    cin >> k;
    cin >> m;

    Solution sol;
    cout << sol.minDays(nums,k,m) << endl;
    
    return 0;
}