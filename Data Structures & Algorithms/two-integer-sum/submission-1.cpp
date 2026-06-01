class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int > result;
        map<int,int> map;
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(!map[nums[i]]) map[nums[i]]=(i+1);
        }
        for(int i=0;i<n;i++){
            int b = target - nums[i];
            if(map[b] && (map[b]-1)!=i) {
                result={map[b]-1,i};
                break;
                }
        }
        sort(result.begin(),result.end());
        return result;
    }
};