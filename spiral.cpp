#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0;
        int right = n-1;
        int top = 0;
        int bottom = m-1;

        while(left <=right && top <=bottom){

            // MR

            for(int i=left;i<=right;i++){
                result.push_back(matrix[top][i]);
            }
            top++;
            // MD
            for(int i=top;i<=bottom;i++){
                result.push_back(matrix[i][right]);
            }
            right--;
            // ML
            if(top <= bottom){
                for(int i=right;i>=left;i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            // MU
            if(left <= right){
                for(int i=bottom;i>=top;i--){
                result.push_back(matrix[i][left]);
                }
                left++;
            }
            
        }

        return result;
    }
};

int main() {

    Solution s;
    int m,n;
    cin >> m >> n;

    vector<vector<int>> mat(m,vector<int>(n));
    vector<int> res;
   
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << "Enter the " << "(" << i << " , " << j << ")" << "th element of the matrix: " << endl;
            cin >> mat[i][j];
        }
    }

    res = s.spiralOrder(mat);

    for(int i=0;i<res.size();i++){
        cout << res[i] << "->";
    }
    
    return 0;
}