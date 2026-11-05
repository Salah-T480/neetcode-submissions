class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0 ;
        int r = nums.size()-1 ;
        int ans = -1 ;
        while(l<=r){
            int mid = l + (r-l)/2 ;
            int v = nums[mid];
            if( target == v ) {
                ans = mid ;
                break ;
            }
            if( v>= nums[l]){
                if( nums[l] <= target  && target <= v){
                    r = mid -1 ;
                }
                else {
                    l = mid+ 1 ;
                }
            }else{
                if( v <= target  && target <= nums[r] ){
                    l = mid+ 1 ;
                }
                else {
                    r = mid -1 ;
                }
            }
        }
        return ans ;
    }
};
