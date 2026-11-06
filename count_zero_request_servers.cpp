/*

n ---> total number of servers
logs[i] -----> {server_id,time} ----> a server with "id" received a request at time "time"
x ----> a simple integer
queries ----> 0-indexed array

output

an array which tells which server did not receive any requests within the time interval [queries[i] - x,queries[i]] ---> arr[i]

Brute force Solution
int x = 5;
for(int i=0;i<logs.size();i++){
    int request_time = logs[i].second;
    for(int j=0;j<queries.size();j++){
        if((queries[j]-x) <= request_time && request_time <= queries[j]){
            arr[j]++;

        }
    }
}
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

/*
class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        
    }
};
*/



int main() {
    int n = 3;
    vector<vector<int>> res;
    vector<vector<int>> logs = {{1,3},{2,6},{1,5}};
    sort(logs.begin(),logs.end());
    for(int i=0;i<logs.size();i++){
        cout << logs[i][0] << "->" << logs[i][1] << endl;
    }
    int x = 2;
    vector<int> queries = {3,4};
    sort(queries.begin(),queries.end());
    // [1,3]
    // [2,4]
    vector<int> arr(queries.size());
    int i=0;
    int j=0;

    


    /*
    // [1,3]
    // [2,4]
    int x = 2;
    vector<int> queries = {3,4};
    vector<int> arr(queries.size());
    map<int,int> visited;
    for(int i=1;i<=3;i++){
        visited[i] = 0;
    }


    for(int j=0;j<queries.size();j++){


        for(int i=1;i<=n;i++){
        visited[i] = 0;
        }
        
        for(int i=0;i<logs.size();i++){
            int request_time = logs[i][1];
            int server_id = logs[i][0];
            if((queries[j]-x) <= request_time && request_time <= queries[j]){
                visited[server_id]++;

            }
            else{
                continue;
                
            }
        }

        for(int k=1;k<=n;k++){
            if(visited[k] == 0){
                arr[j]++;
            }
        }
    }

    for(int i=0;i<arr.size();i++){
        cout << arr[i] << endl;
    }
    */
    //[0,1]

    return 0;
}