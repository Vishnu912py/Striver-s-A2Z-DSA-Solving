#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> arr = {3,5,4,1,1};
    vector<int> result(2,0);
    map<int,int> count;
    int b;
    for(int i=1;i<=arr.size();i++){
        count[i] = 0;
    }
    
    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
    }

    for (const auto& pair : count) {
       cout << pair.first << "->" << pair.second << endl;
    }
    for (const auto& pair : count) {
       if(pair.second == 0){
            b = pair.first;
            break;
       }
       else{
        continue;
       }
    }

    int a;
    for (const auto& pair : count) {
       if(pair.second == 2){
            a = pair.first;
            break;
       }
       else{
        continue;
       }
    }

    result[0] = a;
    result[1] = b;

    cout << a << " " << b << endl;

    return 0;
}