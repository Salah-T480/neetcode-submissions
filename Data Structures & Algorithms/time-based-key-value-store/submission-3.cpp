
class TimeMap {
public:
    map<string,vector<pair<string,int>>> history ;
    TimeMap() {   
    }
    void set(string key, string value, int timestamp) {
        history[key].push_back({value,timestamp}) ;    
    }
    string get(string key, int timestamp) {
        auto it = history.find(key);
        if( it == history.end()) return "" ;
        const vector<pair<string,int>> & list = history[key];
        string res = "" ;
        int l =0 ;
        int r = list.size()-1 ;
        while (l<=r)
        {
            int mid = l + (r-l)/2 ;
            if( list[mid].second <= timestamp ){
                res = list[mid].first ;
                l = mid +1  ;
            }
            else{
                r = mid - 1 ;
            }  
        }
        cout<<res<<endl;
        return res ;
    }
};
