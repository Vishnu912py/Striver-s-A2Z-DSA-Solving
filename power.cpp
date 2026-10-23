// Case 1: for any positive integers x and n
// Case 2: for any negative inetgers x and n

#include <iostream>

using namespace std;

int pow(int x,int n){


    // Base case
    if(x>=0 && n >=0){
        if(x==0 && n==0){
            
        }
        if(n==1){
            return x;
        }

        return x * pow(x,n-1);
    }
}

int main() {
    
    int x;
    int n;
    cin >> x >> n;

    int res =pow(x,n);

    cout << res << endl;
    return 0;
}