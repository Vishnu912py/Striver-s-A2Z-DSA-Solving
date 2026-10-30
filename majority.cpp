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

int main() {
    
    vector<int> arr;
    vector<int> unique;

    int n1;
    cout << "Enter the length of the arr:" << endl;
    cin >> n1;

    int threshold = n1/2;

    for(int i=0;i<n1;i++){
        int in1;
        cout << "Enter the " << i << "th element: " << endl;
        cin >> in1;
        arr.push_back(in1);
    }

    for(int i=0;i<n1;i++){
        if(search(arr[i],unique)){
            continue;
        }
        else{
            unique.push_back(arr[i]);
        }
    }

    for(int i=0;i<unique.size();i++){
        cout << unique[i] << "->";
    }


    

    return 0;
}