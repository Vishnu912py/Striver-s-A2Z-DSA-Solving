#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(vector<int>& nums,int start,int end){
        int i= start;
    int j=  end;
    while(i<=j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;

        i++;
        j--;
    }
    }
void nextPermutation(vector<int>& nums) {
    int n = nums.size();
int ind = -1;
for(int i=n-2;i>=0;i--){
    if(nums[i] < nums[i+1]){
        ind = i;
        break;
    }
}
if(ind==-1){
    reverse(nums,0,n-1);
}
else{
for(int i=n-1;i>ind;i--){
    if(nums[i] > nums[ind]){
        int temp = nums[i];
        nums[i] = nums[ind];
        nums[ind] = temp;
        break;
    }
}

reverse(nums,ind+1,n-1);
}


}

int main() {
    
    vector<int> arr = {3,2,1};
    /*
    bool has_next_permutation = next_permutation(arr.begin(), arr.end());

    cout << "Next permutation: ";
    for (int value : arr) {
        cout << value << ' ';
    }
    cout << "\nNext permutation exists: "
         << boolalpha << has_next_permutation << '\n';

    */
    

    nextPermutation(arr);

    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }

    return 0;
}