#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> three_sum(vector<int>& arr){
    vector<vector<int>> result;
    int n = arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                vector<int> temp(3);
                temp.clear();
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                temp.push_back(arr[k]);

                result.push_back(temp);
            }
        }
    }

    return result;



}

int main() {
    
    vector<int> arr;
    vector<vector<int>> result;
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    for(int i=0;i<n;i++){
        int value;
        cin >> value;
        arr.push_back(value);
    }
    result = three_sum(arr);
    for(int i=0;i<result.size();i++){
           cout << result[i][0] << " "
               << result[i][1] << " "
               << result[i][2] << " ->" << endl;
    }

    cout << result.size() << endl;

    return 0;
}