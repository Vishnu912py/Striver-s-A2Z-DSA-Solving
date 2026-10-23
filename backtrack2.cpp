#include <iostream>
using namespace std;

void f(int cnt,int num){
    if(cnt > num){
        return;
    }
    f(cnt+1, num);
    cout << cnt << endl;
   
}


int main(){

    int num;
    cout << "Enter the number till which you want print: " << endl;
    cin >> num;

    f(1,num);

    return 0;
}