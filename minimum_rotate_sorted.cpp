#include <bits/stdc++.h>
#include <vector>
using namespace std;
int searchRotated(const vector<int>& nums) {
    int start = 0;
    int end = static_cast<int>(nums.size()) - 1;
    int min = INT_MAX;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // Left half is sorted
        if (nums[start] <= nums[mid]) {
            if(nums[start] < min){
                min = nums[start];
            }
            
            start = mid+1;
        }
        // Right half is sorted
        else {
            if(nums[mid] < min){
                min = nums[mid];
            }
            end = mid-1;
        }
    }

    return min;
}
int main() {

    vector<int> nums = {3,4,5,1,2};
    

    cout << searchRotated(nums) << endl;
    
    return 0;
}