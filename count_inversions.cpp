#include <iostream>
#include <vector>
using namespace std;

int main() {
    // brute force
    vector<int> arr={-10, -5, 6, 11, 15, 17};
    int count_inv = 0;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i] > arr[j]){
                count_inv++;
            }
        }
    }

    cout << count_inv << endl;
    return 0;
}