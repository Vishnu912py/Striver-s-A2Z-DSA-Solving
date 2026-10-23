#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the length of the array: " << endl;
    cin >> n;
    vector<int> arr;

    for(int i=0;i<n;i++){
        int choice;
        cout << "Enter the" << i << " number: " << endl;
        cin >> choice;
        arr.push_back(choice);
    }
    int target;
    cout << "Enter the target number: " << endl;
    cin >> target;
    // sorted order
    unordered_map<int,int> hashed;
    for(int i=0;i<arr.size();i++){
        hashed[arr[i]]++; 
    }

    

    cout << "The number of times " << target << " appears in the array: "<< hashed[target] << endl;
    int first_max = -1;
    int second_max = -1;
    int first_index = -1;
    int second_index=-1;

    // the output -1 comes if the array is empty

    for(auto it: hashed){
        cout << it.first << "->" << it.second << endl;
    }


    
    for(auto it: hashed){
        if(it.second >= first_max){
            first_max = it.second;
            first_index = it.first;
            
        }
        if(it.second == first_max){
            if(it.first < first_index){
                first_index = it.first;
            }
        }
    }


    cout << "The first maximum frequent element is: " << first_index << endl;

    return 0;
}