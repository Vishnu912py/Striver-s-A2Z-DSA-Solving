#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    string s;
    getline(cin, s);
    vector<string> str_str;
    string temp;
    for (int i = 0; i < s.length(); i++) {
        if(s[i] == ' '){
            if (!temp.empty()) {
                str_str.push_back(temp);
                temp.clear();
            }
        } else {
            temp.push_back(s[i]);
        }
    }

    if (!temp.empty()) {
        str_str.push_back(temp);
    }

    cout << str_str[str_str.size()-1].length() << endl;

    return 0;
}