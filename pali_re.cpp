#include <iostream>
#include <string>
using namespace std;

bool pali(int start,string str){
    if((start) >= (str.length)/2){
        return 1;
    }

}

int main() {
    
    string s;
    cout << "Enter a String: " << endl;
    cin >> s;
    

    bool res = pali(0,s);

    if(res == 1){
        cout << "It is a palindrome" << endl;
    }
    else{
        cout << "It is not a palindrome" << endl;
    }

    return 0;
}