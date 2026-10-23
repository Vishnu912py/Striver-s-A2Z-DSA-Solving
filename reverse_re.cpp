#include <iostream>
#include <vector>
using namespace std;

// single pointer
void swap(int x, int* arr,int len){
    int temp = arr[len-x-1];
    arr[len-x-1] = arr[x];
    arr[x] = temp;
}

void rev(int start,int* arr,int len){
    if(start >= len/2){
        return;
    }

    swap(start,arr,len);
    start++;
    rev(start,arr,len);


}

int main() {
    
   
    int n;
    cout << "Enter the length of the array: " << endl;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        int in;
        cout << "Enter the " << i << "th element" << endl;
        cin >> in;
        arr[i] = in; 
    }

    rev(0,arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << "-> ";
    }

    return 0;
}