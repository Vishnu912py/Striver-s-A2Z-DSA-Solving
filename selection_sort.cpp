#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int input;
        cin >> input;
        arr.push_back(input);
    }
    
    // selection sort

    for(int i=0;i<n-1;i++){
        int min_ind = i;
        for(int j=i;j<n;j++){
            if(arr[min_ind] > arr[j]){
                min_ind = j;
            }
        }
        // swap between arr[i] and arr[min_ind]
        int temp = arr[min_ind];
        arr[min_ind] = arr[i];
        arr[i] = temp;
    }
    // after sorting
    cout << "Array after sorting" << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << "->" << endl;
    }

    return 0;

}