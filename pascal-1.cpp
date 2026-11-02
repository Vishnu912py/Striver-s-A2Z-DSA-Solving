#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:

    int factorial(int n){
        if(n==1){
            return 1;
        }
        return n * factorial(n-1);
    }
    int pascalTriangleI(int r, int c) {

        int res = factorial(r-1)/(factorial(r-c)*factorial(c-1));
        return res;

    }
};

int main() {

    Solution s;
   cout <<  s.pascalTriangleI(4,2) << endl;
    
    return 0;
}