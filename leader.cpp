#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> arr = {-3,4,5,1,-30,-10};
    vector<int> result;
    for(int i=0;i<arr.size();i++){
        int j;
        int count=0;
        for(j=i+1;j<arr.size();j++){
            if(arr[i] <= arr[j]){
                break;
            }
            else{
                count++;
                continue;
            }
        }
        if(count==arr.size()-i-1){
            result.push_back(arr[i]);
        }

        else{
            continue;
        }
    }

    for(int i=0;i<result.size();i++){
        cout << result[i] << "->";
    }
    return 0;
}