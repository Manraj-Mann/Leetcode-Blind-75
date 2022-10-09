/*Author : Manraj Singh */
#include <bits/stdc++.h>
using namespace std;


// Problem : Two sum 	
/* Solution : 	Two pointer */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        
        int n = nums.size();
        int i = 0;
        int j = n-1;
        vector<int> s;
        vector<pair<int , int >> num;
        for ( int i = 0 ; i < n ; i ++){
            
            num.push_back({nums[i] ,  i});
            
        }
        
        sort(num.begin() , num.end());
        
        while(i < j){
            
            
            int sum = num[i].first + num[j].first;
            cout<<sum<<endl;
            
            if( sum == target){
                
                s.push_back(num[i].second);
                s.push_back(num[j].second);
                break;
                
            }
            else if (sum < target){
                
                i++;
                
                
            }
            else{
                
                j--;
            }
            
        
            
            
        }
        
        return s;
        
        
    }
};


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}