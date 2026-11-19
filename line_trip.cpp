#include <bits/stdc++.h>
using namespace std;

void solve(int n,int x, vector<int>& nums) {
    int min_vol = -1;
    int val=1;
    while(true){
        int k =0;
        int current_fuel = val;
        int state = 0; 
        while(state<x){
            if(state==nums[k]){
                current_fuel = val;
                if(k<n-1){
                    k++;
                }
                
            }
            else if(current_fuel == 0){

                break;
            }

            current_fuel--;
            state++;
            
        }

        if(state == x){
            int l = n-1;
            int state_rev = x;
             while(state_rev>0){
                if(state_rev==nums[l]){
                    current_fuel = val;
                    if(l>0){
                        l--;
                    }
                    
                }
                else if(current_fuel == 0){
                    break;
                }

                current_fuel--;
                state_rev--;
            
            }

            if(state_rev == 0 && state == x){
                min_vol = val;
                break;
            }
            else{
                val++;
            }
        }
    }

    cout << min_vol << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin >> n >> x;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int n;
            cin >> n;
            arr.push_back(n);
        }
        solve(n,x,arr);
    }
    return 0;
}
