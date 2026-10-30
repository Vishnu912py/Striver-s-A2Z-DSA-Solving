#include <iostream>
#include <vector>
using namespace std;

bool search(int target,vector<int>& arr){
    int start = 0;
    int end = arr.size() -1;
    int found = 0;
    while(start <= end){
        int mid = start + (end-start)/2;

        if(arr[mid] > target){
            end = mid -1;
        }

        else if(arr[mid] < target){
            start = mid + 1;
        }

        else{
            found = 1;
            break;
        }
    }


    if(found ==1){
        return 1;
    }
    else{
        return 0;
    }
}

vector<int> intArray(vector<int>& nums1, vector<int>& nums2){
    vector<int> res;
    res.clear();

    int n1 = nums1.size();
    int n2 = nums2.size();
    for(int i=0;i<n1;i++){
        if(!search(nums1[i],res)){
            if(search(nums1[i],nums2)){
                res.push_back(nums1[i]);
            }
        }
        else{
            continue;
        }
        
    }

    return res;
}

int main() {
    
    vector<int> arr1;
    vector<int> arr2;
    vector<int> int_array;


    int n1;
    int n2;

    cin >> n1 >> n2;
    
    cout << "Enter the elements of the first array";
    for(int i=0;i<n1;i++){
        int in1;
        cout << "Enter the " << i <<"th element: ";
        cin >> in1;
        arr1.push_back(in1);

    }

    cout << "Enter the elements of the second array";
    for(int i=0;i<n2;i++){
        int in2;
        cout << "Enter the " << i <<"th element: ";
        cin >> in2;
        arr2.push_back(in2);

    }
    // union of two sorted arrays
    int_array = intArray(arr1,arr2);

    for(int i=0;i<int_array.size();i++){
        cout << int_array[i] << "->";
    }


    return 0;
}