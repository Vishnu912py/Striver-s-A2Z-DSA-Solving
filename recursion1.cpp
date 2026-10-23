#include <iostream>
using namespace std;
// Dry run and understand the Recursion Stack
void f(int cnt){
    if(cnt == 5){
        return;
    }
    cout << "Vishnu" << endl;
    cnt++;
    f(cnt);

}


int main(){

    int cnt =0;
    f(cnt);
    return 0;
}