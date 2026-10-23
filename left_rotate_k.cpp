// left rotate by k places

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> arr;
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int in;
        cin >>in;
        cout << endl;
        arr.push_back(in);
    }
    // left rotate by once
    int first = arr[0];
    for(int i=1;i<=arr.size()-1;i++){
        arr[i-1] = arr[i];
    }

    arr[n-1] = first;

    for(int i=0;i<arr.size();i++){
        cout << arr[i] << "->";
    }


    return 0;
}