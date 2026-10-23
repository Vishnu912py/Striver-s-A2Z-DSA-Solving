#include <iostream>

using namespace std;

int fact(int num){
    if(num == 1){
        return 1;
    }

    return num * fact(num-1);
}

int main() {
    
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    int result=fact(n);

    cout << "The factorial of the number: " << result << endl;
    return 0;
}