#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int i= 0;
        int j =0;
        while(i<needle.length() && j<haystack.length()){
            if(needle[i] == haystack[j]){
                int flag = 0;
                int temp = j;
                for(int k=0;k<needle.length();k++){
                    if(needle[k] == haystack[j]){
                        j++;
                    }
                    else{
                        flag=1;
                        break;
                    }
                }
                
                if(flag == 1){
                    i=0;
                    j++;
                }
                else{
                    return temp;
                }
            }

            else{
                j++;
            }
        }

        return -1;
    }
};

int main() {
    string haystack;
    string needle;
    cin >> haystack;
    cin >> needle;
    Solution sol;
    cout << sol.strStr(haystack,needle) << endl;
    return 0;
}