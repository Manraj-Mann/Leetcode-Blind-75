/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : 	217. Contains Duplicate
/* Solution : 	 HASHTABLE */
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        
        unordered_map< int , int > mp;
        int n = nums.size();
        bool ans = false;
        
        for ( int i = 0 ; i < n ; i++){
            
            mp[nums[i]]++;
            if (mp[nums[i]] > 1){
                ans = true;
                break;
            }
            
        
        }
        
        return ans;
        
        
    }
};

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}