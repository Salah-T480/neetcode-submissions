class Solution {
public:
    
    bool isValid(string s) {
        vector<char> opening;
        map<char, char> corr;
        corr['}']='{';
        corr[')']='(';
        corr[']']='[';

        for(char x : s){
            if(x=='[' || x=='(' || x=='{') opening.push_back(x);
            else{
                if( opening.size()==0 || corr[x]!=opening.back()) return false;
                opening.pop_back();  
            }
        }
        return opening.size()==0;
    }
};
