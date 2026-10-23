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
    // The way you give the loop conditions determines whether you are accessing a location whihc is not present.
    // smartly select your loop conditions
    // Bounds: Starts at i = 1 up to n - 1.
    //Safety: j >= 0 guards against out-of-bounds memory access.
    //Shifting vs. Swapping: Overwriting arr[j + 1] = arr[j] instead of a 3-step swap per shift cuts operations in half.

    // A bug is a defect that causes incorrect or unexpected behaviour. The bug usually occurs when human intent is not effectively transferred to machine intent
    /*
    
    
    
    
    
    */
    for(int i=0;i<=n-2;i++){
        int j=i+1;
        int temp = i;
        while(arr[j] > arr[temp]){
            temp--;
        }

        while((j-1) != temp){
            int swap = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = swap;
            j--;
        }
    }

    
    // after sorting
    cout << "Array after sorting" << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << "->" << endl;
    }

    return 0;

}