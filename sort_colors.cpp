#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> nums ={2,0,2,1,1,0};
    vector<int> count(3,0);
    for(int i=0;i<nums.size();i++){
        if(nums[i] == 0){
            count[0]++;
        }
        else if(nums[i] == 1){
            count[1]++;
        }
        else{
            count[2]++;
        }
    }
    int k=0;
    while(k<count[0]){
        nums[k] = 0;
        k++;
    }
    while(k<count[0]+count[1]){
        nums[k] = 1;
        k++;
    }
    while(k<count[0]+count[1]+count[2]){
        nums[k] = 2;
        k++;
    }
   

    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    }
    return 0;
}