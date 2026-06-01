class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix={1};
        for(auto x: nums){
            prefix.push_back(prefix.back()*x);
        }
        vector<int> suffefix={1};
        for(int i=nums.size()-1;i>=0;i--){
            suffefix.push_back(suffefix.back()*nums[i]);

        }
        
        int n= nums.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            int diff = n-1-i;
            
            res.push_back(prefix[i]*suffefix[diff]);
        }
        return res;

    }
};
