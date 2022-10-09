/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	best-time-to-buy-and-sell-stock
/* Solution : 	two pointer  */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        
        int i = 0;
        int j = 1;
        int maxv = 0;
        int n = prices.size();
        
        
        while( i < n){
            
            
            while( j < n && prices[i] < prices[j]){
                
                maxv = max ( maxv , (prices[j]- prices[i]));
                j++;
            }
            
            i++;
            
            if( i == j){
                
                j = i+1;
            }
            
            
        }
        
        return maxv;
        
    
    }
};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}