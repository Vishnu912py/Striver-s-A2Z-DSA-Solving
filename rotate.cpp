#include <iostream>

using namespace std;

int main() {
    
    int m;

    vector<vector<int>> mat(m,vector<int>(m));
    vector<int> res;
   
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout << "Enter the " << "(" << i << " , " << j << ")" << "th element of the matrix: " << endl;
            cin >> mat[i][j];
        }
    }

    int left = 0;
    int right = m-1;
    int top = 0;
    int bottom = m-1;

    
    return 0;
}