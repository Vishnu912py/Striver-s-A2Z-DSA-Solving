#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3,5,8,15,19};
    int target = 3;

    int start = 0;
    int end = arr.size() - 1;
    int ind = -1;
    int found = 0;

    while(start <= end){
        int mid = start + (end-start)/2;

        if(arr[mid] > target){
            end = mid-1;
            ind = mid;
        }

        else if(arr[mid] < target){
            start = mid+1;
            ind = mid;
        }

        else{
            ind = mid;
            found == 1;
            break;
        }
    }

    cout << ind << endl;
    return 0;
}