#include <iostream>
//#include <vector>
#include <map>
//#include <algorithm>
//#include <set>
using namespace std ;
typedef long long ll ;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        map<ll,ll> seen ;
        seen[0]=-1;
        ll prefixSum = 0;
        ll n = nums.size();
        for(int i =0;i<n;i++){
            prefixSum += nums[i];
            prefixSum %= k ;
            if(seen[prefixSum]){
                ll index = seen[prefixSum] - (prefixSum!=0) ;

                if(index<=(i-2)){
                    return true ;
                }
            }
            else{
                seen[prefixSum] = (i+1) ;
            }
        }
        return false ;
    }
};