class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int> res(n);
        int x =1;
        for(int i=0; i<n;i++){
            res[i]= x;
            x*=nums[i];
        }
        int y=1;
        for(int i=n-1;i>=0;i--){
            res[i]*=y;
            y*=nums[i];
        }

        return res;

    }
};
