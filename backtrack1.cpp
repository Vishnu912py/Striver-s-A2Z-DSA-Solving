#include <iostream>
using namespace std;

void f(int cnt,int n){
    if(cnt < 1){
        return;
    }


    f(cnt-1,n);
    cout << cnt << endl;
    
    
}


int main(){

    int num;
    cout << "Enter the number till which you want print: " << endl;
    cin >> num;

    f(num,num);

    return 0;
}