class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int start=0;
        int n = nums.size();
        int index = 1;
        int ans = 0;
        int similar = 0;
        while(index<n){
            if((nums[index-1]+1)==nums[index]){
                index++;
            }
            else if(nums[index-1]==nums[index]){
                similar++;
                index++;
            }
            else{
                ans= max(ans,(index-start-similar));
                start = index;
                similar=0;
                index++;
            }
        } 
        ans= max(ans,(n-start-similar));
        return ans;
    }
};