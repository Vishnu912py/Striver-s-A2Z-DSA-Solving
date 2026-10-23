#include <iostream>
using namespace std;

void f(int cnt,int n){
    if(cnt == n+1){
        return;
    }

    cout << cnt << endl;
    cnt++;
    f(cnt,n);
}


int main(){

    int num;
    cout << "Enter the number till which you want print: " << endl;
    cin >> num;

    f(1,num);

    return 0;
}