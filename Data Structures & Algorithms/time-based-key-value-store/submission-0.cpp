class TimeMap {
public:
    map<string,vector<int>> timestamps_foreach_key ;
    map<string,map<int,string>> history ;

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        timestamps_foreach_key[key].push_back(timestamp);
        history[key][timestamp] = value ;    
    }
    
    int getMinValid(vector<int> times, int target){
        if(times.empty()) return -1 ;
        int l = 0 ;
        int r = times.size() -1;
        int ans = -1 ;
        while (l<=r){
            int mid = l + (r-l)/2 ;
            int v = times [mid];
            if(v == target ) return target ;
            if( v<= target ){
                l = mid+1 ;
                ans = v ;
            }
            else{
                r = mid -1 ;
            }
        }
        return ans ;
    }

    string get(string key, int timestamp) {
        vector<int> times = timestamps_foreach_key[key] ;
        int valid = getMinValid(times,timestamp);
        if( valid ==-1) return "";
        return history[key][valid];
        
    }
};