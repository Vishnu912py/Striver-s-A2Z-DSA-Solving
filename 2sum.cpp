#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr={2,6,5,8,11};
    int target = 15;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << "->";
    }
    cout << endl;
    int i=0;
    int j=arr.size()-1;
    int index1 = -1;
    int index2 = -2;
    int found = 0;
    while(i<=j){
        int sum = arr[i] + arr[j];
        if(sum < target){
            i++;
        }
        if(sum > target){
            j--;
        }
        if(sum == target){
            index1 = i;
            index2 = j;
            found =1;
            break;
        }

    }

    if(found == 1){
        cout << index1 << endl;
        cout << index2 << endl;
    }
    else{
        cout << "No pair of numbers found" << endl;
    }
    
    return 0;
}