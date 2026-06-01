class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int,int> map;
        for(auto i : nums){
            if(map[i]==1) return true;
            map[i]=1;
        }
        return false;
    }
};