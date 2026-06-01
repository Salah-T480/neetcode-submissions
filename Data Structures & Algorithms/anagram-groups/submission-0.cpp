
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> map;
        for(auto s : strs){
            string curr = s;
            sort(curr.begin(),curr.end());
            map[curr].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto item : map){
            ans.push_back(item.second);
        }
        return ans;
    }
};