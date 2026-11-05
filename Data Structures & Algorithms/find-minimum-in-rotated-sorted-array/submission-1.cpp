class Solution {
public:
    int findMin(vector<int> &nums) {
        int ans  =  nums[0];
        int l = 0 ;
        int r = nums.size()-1;
        while ( l<=r ){
            int mid = l + (r-l)/2 ;
            int v = nums[mid];
            if( nums[l]< v && v< nums[r] ){
                r = mid -1 ;
            }
            else if( nums[l] < v && v>nums[r] ){
                l = mid+ 1 ;
            }
            else if( nums[l] > v && v < nums[r] ){
                r = mid -1 ;
            }
            else l++ ;
            ans = min(ans , v ) ;
        }
        return ans ;
        
    }
};