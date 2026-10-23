#include <iostream>
using namespace std;

void f(int cnt){
    if(cnt == 0){
        return;
    }

    cout << cnt << endl;
    cnt--;
    f(cnt);
}


int main(){

    int num;
    cout << "Enter the number till which you want print: " << endl;
    cin >> num;

    f(num);

    return 0;
}