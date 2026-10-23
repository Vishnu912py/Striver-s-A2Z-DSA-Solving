#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the length of the array: " << endl;
    cin >> n;
    vector<int> a;
    cout << "Enter the elements in the array: " << endl;
    for(int i=0;i<n;i++){
        
        cout << "Enter " << i << "th" << "element: " << endl;
        int choice;
        cin >> choice;
        a.push_back(choice);
    }
    int sum =0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    cout << endl;
    
    cout << "The sum of all elements in the array: " << sum << endl;
    return 0;
}