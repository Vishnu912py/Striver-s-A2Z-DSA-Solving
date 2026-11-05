#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 1, 1, 3, 2, 2};
    map<int,int> count;
    int threshold = arr.size()/3;
    vector<int> result;
    for(int i=0;i<arr.size();i++){
      count[arr[i]]++;
    }

    
    for (const auto& pair : count) {
       if(pair.second > threshold){
            result.push_back(pair.first);
       }
       else{
        continue;
       }
    }

    for(int i=0;i<result.size();i++){
        cout << result[i]<< endl;
    }
   
    return 0;
}