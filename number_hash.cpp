#include <iostream>
#include <vector>
using namespace std;

int hash_value(int num,vector<int> arr){
    return arr[num];
}


int main(){
    
    vector<int> arr = {1,2,1,3,2};
    vector<int> hashed_arr(100, 0);
    int target;
    cout << "Enter the target element: " << endl;
    cin >> target;
    for(int i=0;i<arr.size();i++){
        hashed_arr[arr[i]]++;
    }
    int count = hash_value(target,hashed_arr);
    cout << "The no of times the number " << target << " appears: " << count << endl;

    return 0;
}