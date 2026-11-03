#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int m;
    cout << "Enter the order of the square matrix: " << endl;
    cin >> m;
    vector<vector<int>> mat(m,vector<int>(m));
   
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout << "Enter the " << "(" << i << " , " << j << ")" << "th element of the matrix: " << endl;
            cin >> mat[i][j];
        }
    }
   
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    
    
    for(int j=0;j<m/2;j++){
        for(int i=0;i<m;i++){
            int temp = mat[i][j];
            mat[i][j] = mat[i][m-j-1];
            mat[i][m-j-1] = temp;
        }
    }
    



    return 0;
}