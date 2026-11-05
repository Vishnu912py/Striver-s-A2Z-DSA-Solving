#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
     vector<int> arr = {2,3,5,-2,7,-4};
    int max_sum = INT_MIN;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        if(sum < 0){
            sum = arr[i];
        }
        else{
            sum+=arr[i];
        }
        if(sum > max_sum){
            max_sum = sum;
        }
    }
    cout << max_sum << endl;
    return 0;
}