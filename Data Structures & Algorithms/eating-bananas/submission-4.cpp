class Solution {
public:
    int getMax(vector<int>& piles){
        int m = piles[0] ;
        for(auto x : piles){
            if(m<x) m =x ;
        }
        return m ;
    }
    long long  getCalcule(vector<int>& piles , int x ){
        long long  t =  0; 
        for(auto p : piles){
            t += (p + x - 1LL) / x ;
        }
        return t ;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1 ;
        int r = getMax(piles);
        int ans= r  ;
        while( l<=r ){
            int m = l + (-l+r)/2 ;
            long long c = getCalcule(piles,m);
            if(c>h){
                l =m +1 ;
            }
            else{
                ans = min(ans,m) ;
                r = m  -1;
            }            
        }
        return ans ;
    }
};
