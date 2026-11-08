#include <iostream>
#include <vector>
using namespace std;
int searchRotated(const vector<int>& nums, int target) {
    int start = 0;
    int end = static_cast<int>(nums.size()) - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
            return mid;

        // Left half is sorted
        if (nums[start] <= nums[mid]) {
            if (nums[start] <= target && target < nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        // Right half is sorted
        else {
            if (nums[mid] < target && target <= nums[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    return -1;
}
int main() {

    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 5;

    cout << searchRotated(nums,target) << endl;
    
    return 0;
}