#include <iostream>
using namespace std;

int sum(int num){
    if((num-1) == 0){
        return 1;
    }

    return num + sum(num-1);

    
}


int main(){

    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    int result=sum(n);

    cout << "The sum of first " << n << " natural numbers: " << result << endl;

    return 0;
}