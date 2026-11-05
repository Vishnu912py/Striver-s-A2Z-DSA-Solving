#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
    vector<int> arr = {2,3,5,-2,7,-4};
    int max_sum = INT_MIN;
    for(int i=0;i<arr.size();i++){
        int currsum = 0;
        for(int j=i;j<arr.size();j++){
            currsum += arr[j];
            if(currsum > max_sum){
                max_sum = currsum;
            }
        }
    }
    
    
    cout << max_sum << endl;

    

   
    return 0;
}