#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long merge(vector<int>& arr, int low, int mid, int high,
                    vector<int>& res) {
        int i= low;
        int j= mid+1;
        long long count = 0;
        res.clear();

        while(i<=mid && j<= high){
            if(arr[i] <= arr[j]){
                res.push_back(arr[i]);
                i++;
            }

            else{
                count += mid - i + 1;
                res.push_back(arr[j]);
                j++;
            }
        }

        // to push the the restover elements
        
        while(i<= mid){
            res.push_back(arr[i]);
            i++;
        }

        while(j<= high){
            res.push_back(arr[j]);
            j++;
        }

        for(size_t k=0; k<res.size(); k++){
            arr[low+k] = res[k];
        }

        return count;
    }

    long long merge_sort(int start, vector<int>& arr, int end,
                         vector<int>& res) {
        if(start >= end){
            return 0;
        }

        int mid = start+(end-start)/2;
        long long count = merge_sort(start, arr, mid, res);
        count += merge_sort(mid+1, arr, end, res);
        count += merge(arr, start, mid, end, res);
        return count;
    }

   long long numberOfInversions(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        return merge_sort(0, nums, n - 1, res);

   }
};

int main() {
    vector<int> arr = {2, 3, 7, 1, 3, 5};
    Solution s;
    long long count = s.numberOfInversions(arr);

    cout << count << endl;
    return 0;

}