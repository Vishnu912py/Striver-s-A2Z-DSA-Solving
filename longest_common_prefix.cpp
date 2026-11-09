#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";

        if(strs[0] == ""){
            return "";
        }

        else if(strs.size() == 1){
            return strs[0];
        }
        
        int found = 1;
        int k=0;
        int min_length= INT_MAX;

        for(int i=0;i<strs.size();i++){
            if(strs[i].length() < min_length){
                min_length = strs[i].length();
            } 
        }
        while(true){
            
            for(int i=0;i<strs.size()-1;i++){

                if(k<min_length && strs[i][k] == strs[i+1][k]){
                    continue;
                }
                else{
                    found =0;
                    break;
                }
            }

            if(found!=0){
                prefix.push_back(strs[0][k]);
                k++;
            }

            else{
                break;
            }
        }

        return prefix;
    }   
};


int main() {
    int n;
    cin >> n;
    vector<string> set_strs;
    for(int i=0;i<n;i++){
        string temp;
        cin >> temp;
        set_strs.push_back(temp);
    }

    Solution sol;
    cout << sol.longestCommonPrefix(set_strs) << endl;
    
    return 0;
}