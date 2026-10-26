// left rotate by k places

#include <iostream>
#include <vector>
using namespace std;

void left_rotate_k(vector<int>& arr, int k){
    int len = arr.size();
    int i=0;
    int j=k-1;

    while((i+2)%len > 0){
        int temp1 = i;
        int temp2 = j;
        int num;
        // Boundary condition
        if((num = (temp2-temp1)%2) < 0){
            while(temp1 >= (len-num)){
            int swap = arr[temp2];
            arr[temp2] = arr[temp1];
            arr[temp1] = swap;
            temp1 = (temp1+1)%len;
            temp2 = (temp2-1)%len;
            }
            break;
        }
        else{
        while(temp1 >= (temp1 + (temp2-temp1)/2)){
            int swap = arr[temp2];
            arr[temp2] = arr[temp1];
            arr[temp1] = swap;
            temp1 = (temp1+1)%len;
            temp2 = (temp2-1)%len;
        }
        }
        i=(i+1)%len;
        j=(j+1)%len;
    }

    


}

int main() {
    
    vector<int> arr;
    int n;
    cout << "Enter the length of the array: " << endl;
    cin >> n;
    int k;
    cout << "Enter the value of k: " << endl;
    cin >> k;
    

    for(int i=0;i<n;i++){
        int in;
        cout << "Enter the value" << i << "th element: " << endl;
        cin >>in;
        arr.push_back(in);
    }
    // left rotate by k places
    
    
    left_rotate_k(arr,k);
    

    for(int i=0;i<n;i++){
        cout << arr[i] << "->";
    }

   

    return 0;
}