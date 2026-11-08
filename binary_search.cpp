#include <iostream>
#include <vector>
using namespace std;


int binary_search(vector<int>& nums, int target,int find_first){

    int start = 0;
    int end = nums.size() - 1;
    int bound_index = -1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(nums[mid] > target){
            end = mid-1;
        }

        else if(nums[mid] < target){
            start = mid+1;
        }

        else{
            bound_index=mid;
            if(find_first){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
    }

    return bound_index;

}

int main() {
    vector<int> nums = {5, 7, 7,7,7,7,7, 8, 8, 10};
    int target = 7;

    int first = binary_search(nums,target,1);
    int last = binary_search(nums,target,0);

    
    

    

    



    cout << first << " " << last << endl;
    return 0;
}