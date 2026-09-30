
class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<3){
            return  0 ;
        }
        int ans  =  0; 
        int l = 0;
        int r = 1;
        while (l < height.size()){
            //cout<<'l'<<l<<' ';
            int leftBorder = height[l];
            int indexMax = r ;
            int old = indexMax ;
            vector<int> acc ;
            while(r<height.size() && height[r] < leftBorder ){
                indexMax = ((height[indexMax] <= height[r] ) ? r: indexMax) ;
                acc.push_back(height[r]);
                r++ ;
            }
            //cout<<'r'<<r<<' ';
            if(r<height.size()){
                int minHeight = min(leftBorder,height[r]);
                int total =  0; 
                for(auto x : acc) {
                    total+= min(x,minHeight) ;
                }
                ans+=max(0,(r-l-1)*minHeight - total) ;
                //cout<<"ans"<<ans<<endl;
                l = r ;
                r  = l+1 ;
            }
            else{
                int total =  0; 
                if(indexMax!=old){
                    int minHeight = min(leftBorder,height[indexMax]);
                    int width = (indexMax-l-1) ;
                    for(int i =0 ;i<width;i++){
                        total+=min(minHeight,acc[i]);
                    }
                    ans += max(0,(width*minHeight -total));
                    l = indexMax ;
                    r= l+1 ;
                }
                else{
                    l++;
                    r=l+1;
                    //cout<<'s';
                }
            }
        }
        return ans ;
    }
};

    