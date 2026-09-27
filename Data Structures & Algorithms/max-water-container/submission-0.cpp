class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left =  0;
        int right = heights.size()-1 ;
        int water =0 ;
        while (left<right)
        {
            int width = right - left ;
            int maxHeight = min(heights[left],heights[right]);
            int newAmount = maxHeight*width ;
            water = max(water,newAmount);
            if(heights[left]<=heights[right]){
                left++ ;
            }
            else{
                right--;
            }
        }
        return water ;
    }
};
