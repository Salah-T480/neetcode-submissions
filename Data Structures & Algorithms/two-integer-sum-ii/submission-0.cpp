class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int p = 0;
        int q = numbers.size() -1;
        
        while( p<q){
            int total = numbers [p] + numbers[q];
            if(total== target ) return {p+1,q+1} ;
           
            if(total>target){
                q--;
            }
            else{
                p++ ;
            }
            
        }
        return {p+1,q+1};

    }
};
