#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int val;
    cout << "Enter the value to be removed: " << endl;
    cin >> val;

    int n1;
    cout << "Enter the length of the array: ";
    cin >> n1;

    for(int i=0;i<n1;i++){
        int in1;
        cout << "Enter the " << i <<"th element: " << endl;
        cin >> in1;
        arr.push_back(in1);
    }

   int first_val = 0;
    int first_non_val = 0;
    int n1 = nums.size();

    while(first_val <= n1-1 && first_non_val <= n1-1){
        if(nums[first_val] == val){
            if(nums[first_non_val] != val && first_non_val > first_val){
                int temp = nums[first_non_val];
                nums[first_non_val] = nums[first_val];
                nums[first_val] = temp;
            }
            else{
                first_non_val++;
            }
        }
        else{
            first_val++;
        }
    }



    int k =0;
    while(k< nums.size() && nums[k] != val){
        k++;
    }

    

    cout << k << end;

    return 0;
}