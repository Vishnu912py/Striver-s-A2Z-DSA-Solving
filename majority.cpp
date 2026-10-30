#include <iostream>
#include <vector>
#include <map>
using namespace std;
//binary search only works on a sorted array


int main() {
    
    vector<int> arr = {7,0,0,1,7,7,2,7,7};

    int n1 = arr.size();
    int threshold = n1/3;




    map<int,int> majority_element;

    for(int i=0;i<n1;i++){
        majority_element[arr[i]]++;
    }

    int max_freq_element = -1;
    int max_freq = -1;

    int ele = -1;
    int freq = -1;


    for (const auto& pair : majority_element) {
        if(pair.second>threshold){
            max_freq_element = pair.first;
        }
    }

    cout << max_freq_element << endl;

    
    
    
    return 0;
}