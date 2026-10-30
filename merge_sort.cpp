#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int low,int mid, int high,vector<int>& res){
    int i= low;
    int j= mid+1;
    res.clear();

    while(i<=mid && j<= high){
        if(arr[i] <= arr[j]){
            res.push_back(arr[i]);
            i++;
        }

        else{
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
}

void merge_sort(int start,vector<int>& arr,int end,vector<int>& res){
    
    if(start >= end){
        return;
    }

    int mid = start+(end-start)/2;
    //divide step
    merge_sort(start,arr,mid,res);
    merge_sort(mid+1,arr,end,res);

    merge(arr,start,mid,end,res);
    



}


// merge sort
int main() {

    vector<int> arr;
    
    int n;
    cout << "Enter a length of the arr: " << endl;
    cin >> n;
    vector<int> result;
    if(n <= 0){
        return 0;
    }

    for(int i=0;i<n;i++){
        int input;
        cout << "Enter the " << i << "th element: " << endl;
        cin >> input;
        arr.push_back(input);
    }

    merge_sort(0,arr,n-1,result);


    for(size_t i=0;i<arr.size();i++){
        cout << arr[i] << "->";
    }
    return 0;
}