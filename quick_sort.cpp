#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int findpivot(vector<int>& arr, int low,int high){
    int pivot = high;
    int i= low;
    int j= high;

    while(true){
        while(arr[i] < arr[pivot] && i<=high){
            i++;
        }

        while(arr[j] >= arr[pivot] && j>=low){
            j--;
        }
        // swapping
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        else{
            break;
        }
        
    }

    int temp = arr[i];
    arr[i] = arr[pivot];
    arr[pivot] = temp;
    
    return i;
    

}
void quick_sort(vector<int>& arr,int low, int high){

    if(low < high){
        int partidx = findpivot(arr,low,high);
        quick_sort(arr,low,partidx-1);
        quick_sort(arr,partidx+1,high);
    }

    return;

}

int main() {

    vector<int> arr;
    
    int n;
    cout << "Enter a length of the arr: " << endl;
    cin >> n;
    if(n <= 0){
        return 0;
    }

    for(int i=0;i<n;i++){
        int input;
        cout << "Enter the " << i << "th element: " << endl;
        cin >> input;
        arr.push_back(input);
    }
    //
    quick_sort(arr,0,n-1);
    int max_sum = INT_MIN;
    for(int i=0;i<arr.size();i++){
        int k=0;
        while(k<arr.size()-i){
        
            int sum = 0;
            int l=i;
            while(l<=k+i){
                sum += arr[l];
                l++;
            }
            if(sum > max_sum){
                max_sum = sum;
            }
            
            k++;
        }
    }

    cout << max_sum << endl;

    return 0;
}