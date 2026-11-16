#include <iostream>
#include <vector>
using namespace std;





int main() {

    vector<int> nums = {3, 3, 7, 7, 10, 11, 11};

    int start =0;
    int end = nums.size()-1;

    while (start < end) {
    int mid = start + (end - start) / 2;

    if (mid % 2 == 1)
        mid--;

    if (nums[mid] == nums[mid + 1])
        start = mid + 2;
    else
        end = mid;
    }


    cout << nums[start] << endl;
    return 0;
}