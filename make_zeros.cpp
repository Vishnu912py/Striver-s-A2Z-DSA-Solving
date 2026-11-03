#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;
    vector<vector<int>> matrix(m,vector<int>(n));
    vector<pair<int,int>> zeros_indexes;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            
            if(matrix[i][j] == 0){
                zeros_indexes.push_back({i,j});
            }
        }
    }

    for(int i=0;i<zeros_indexes.size();i++){
        int x = zeros_indexes[i].first;
        int y = zeros_indexes[i].second;

        for(int j=0;j<n;j++){
            matrix[x][j] = 0;
        }

        for(int j=0;j<m;j++){
            matrix[j][y] = 0;
        }
    
    
    }
   


    



    return 0;
}