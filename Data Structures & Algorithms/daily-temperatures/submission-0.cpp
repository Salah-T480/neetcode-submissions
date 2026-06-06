class Solution {
private:
    stack<pair<int,int>> temp;
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n,0) ;
        for(int i=0;i<n;i++){
            while(!temp.empty() && temp.top().first<temperatures[i]){
                ans[temp.top().second]=(i-temp.top().second);
                temp.pop();
            }
            temp.push({temperatures[i],i});
        }
        return ans;
    }
};