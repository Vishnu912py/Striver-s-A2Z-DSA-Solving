#include <iostream>
using namespace std;
#include <vector>
#include <string>
int hash_value(char num,vector<int> arr){
    return arr[num];
}



int main(){

    char target;
    
    string str;
    cout << "Enter the string: " << endl;
    cin >> str;
    cout << "Enter the target character: " << endl;
    cin >> target;
    vector<int> hashed(256,0);
    for(int i=0;i<str.length();i++){

        hashed[str[i]]++;
    }

    int count = hash_value(target,hashed);
    cout << "The no of times the character " << target << " appears in the string: " << count << endl;
}