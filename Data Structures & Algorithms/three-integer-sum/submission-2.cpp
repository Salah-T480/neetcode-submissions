
class Solution {
public:

    

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans = {} ;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0 ;i<nums.size();i++){
            int a = nums [i] ;
            if(a>0) break; 
            else{
                int left =  i+1;
                int right = nums.size()-1 ;
                
                while( left<right){
                    int total = a + nums[left]+ nums[right] ;
                    if(total== 0) {
                        ans.push_back({a,nums[left],nums[right]});
                        int l = nums[left] ;
                        int r = nums[right] ;
                        while(left<nums.size() &&  nums[left]== l) left++;
                        while(right>=0 && nums[right]== r) right-- ;
                    }
                    else if(total>0){
                        right--;
                    }
                    else{
                        left++ ;
                    }
                }
                
            }
            while(i<nums.size() && nums[i]==a ) i ++ ;
            i--;
        }
        return ans ;
    }
        
       
};