/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	product-of-array-except-self
/* Solution : 	O(1) Solution just find the parretn and prefix  */
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector <int > prefix (n);
        prefix[n-1] = 1;
        prefix[0] = 1;
        int mul = 1;
        
        for ( int i = 0 ; i < n-1;i++ ){
            
            mul *= nums[i];
            prefix[i+1] = mul;
            
        }
        mul = 1;
        for ( int i = n-1 ; i >= 0;i-- ){
            
            prefix[i] *= mul;
            mul *= nums[i];
            
        }
        
        
        return prefix;
        
        
    }
};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}