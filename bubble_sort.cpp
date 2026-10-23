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
    // If a invalid memory location is accessed it will give a runtime error and get terminated
    // Bubble sort(pushes the maximum to the last)
    // Worst Case: O(n^2) and Average Case: O(n^2)
    // Best Case: O(n)
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j+1] < arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    
    // after sorting
    cout << "Array after sorting" << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << "->" << endl;
    }

    return 0;

}