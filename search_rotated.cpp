#include <iostream>
#include <vector>
using namespace std;


int binary_search(int low,int high,vector<int>& nums, int target){

    int start = low;
    int end = high;
    int ind = -1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(nums[mid] > target){
            end = mid-1;
        }

        else if(nums[mid] < target){
            start = mid+1;
        }

        else{
            ind = mid;
            break;
        }
    }

    return ind;

}

int main() {
    
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 3;

    int start = low;
    int end = high;
    int ind = -1;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(nums[mid] < nums[mid+1]){
            end = mid-1;
        }

        else if(nums[mid] > nums[mid+1]){
            ind = mid;
            break;
        }
    }

    int index1 = -1;
    int index2 = -1;
    
    index1 = binary_search(ind+1,nums.size()-1,nums,target);
    
    
    index2 = binary_search(0,ind,nums,target);

    if(index1 == -1 && index2 != -1){
        cout << index2 << endl;
    }
    else if(index1 == -1 && index2 == -1){
        cout << -1 << endl;
    }
    else{
        cout << index1 << endl;
    }
    

    
    return 0;
}