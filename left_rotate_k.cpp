// left rotate by k places

#include <iostream>
#include <vector>
using namespace std;

void left_rotate_1(vector<int>& arr,int k){
    int n = arr.size();
    if((k=k%n) < 1){
        return;
    }
    int first = arr[0];
    
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }

    arr[n-1] = first;
    k--;
    left_rotate_1(arr,k);

    
}



int main() {
    
    vector<int> arr;
    int n;
    cout << "Enter the length of the array: " << endl;
    cin >> n;
    int k;
    cout << "Enter the value of k: " << endl;
    cin >> k;
    

    for(int i=0;i<n;i++){
        int in;
        cout << "Enter the value" << i << "th element: " << endl;
        cin >>in;
        arr.push_back(in);
    }
    // left rotate by k places
    
    
    left_rotate_1(arr,k);
    
    // final k rotated array
    for(int i=0;i<n;i++){
        cout << arr[i] << "->";
    }

   

    return 0;
}