#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int start = 0;
    int end = n;
    int ind = -1;
    int flag =0;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(mid*mid == n){
            flag=1;
            ind = mid;
            break;
        }
        else if(mid*mid > n){
            end = mid-1;
            ind = start;
        }
        else{
            start = mid+1;
            ind = start;
        }
    }
    if(flag==1){
        cout << ind << endl;
    }
    else{
        cout << ind-1 << endl;
    }
    
    return 0;
}