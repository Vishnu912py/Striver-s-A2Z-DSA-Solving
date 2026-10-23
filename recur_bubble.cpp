// recursive bubble sort

#include <iostream>
#include <vector>
using namespace std;

void swap(int j,vector<int>& arr){
    int temp = arr[j];
    arr[j] = arr[j-1];
    arr[j-1] = temp;
}

void bubble_sort(vector<int>& arr,int j){
    if(j==0){
        return;
    }

    for(int k=0;k<j;k++){ // -----> runs j times
        if(arr[k+1] < arr[k]){ // ----> O(1) swap op
            swap(k+1,arr);
        }
    }
    j--;
    bubble_sort(i,arr,j);
    


}

int main() {
    int n;
    cout << "Enter the length of the array: " << endl;
    cin >> n;
    vector<int> arr;

    

    for(int i=0;i<n;i++){
        int in;
        cout << "Enter the " << i <<"th element" << endl;
        cin >> in;
        arr.push_back(in);
    }

    if(arr.size() == 0){
        cout << "sorting not possible, array is empty" << endl;
    }

    bubble_sort(0,arr,arr.size() -1);

    for(int i=0;i<n;i++){
        cout << arr[i] << "-> ";
    }


    
    return 0;
}