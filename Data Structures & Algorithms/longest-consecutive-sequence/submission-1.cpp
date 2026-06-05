class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> set;
        for(auto x: nums){
            set.insert(x);
        } 
        int ans =0;
        for(auto x: nums){
            if( set.find(x-1)==set.end()){
                int len =0;
                while(set.find(x+len)!=set.end()) len++;
                ans= max(len,ans);
            }
        }
        return ans;
    }
};