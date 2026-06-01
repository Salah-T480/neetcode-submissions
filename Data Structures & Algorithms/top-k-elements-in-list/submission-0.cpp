class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> map;
        for(auto i: nums){
            map[i]++;
        }
        vector<pair<int,int>> line;
        for(auto x :map){
            line.push_back({x.second,x.first});
        }
        sort(line.begin(),line.end(),greater<>());
        vector<int > ans;
        for(int i=0;i<k;i++){
            ans.push_back(line[i].second);
        }
        return ans;
    }
};
