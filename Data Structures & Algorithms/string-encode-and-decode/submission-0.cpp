class Solution {
public:

    string encode(vector<string>& strs) {
        string chaine ="";
        vector<int> sizes;
        for(auto x: strs){
            sizes.push_back(x.length());
            chaine+=x;
        }
        string header="";
        for(auto x: sizes){
            header+=to_string(x);
            header+=',';
        }
        header+="200,";
        return (header+chaine+'_');
    }

    vector<string> decode(string s) {
        vector<int> sizes;
        string num="";
        int i=0;
        //cout<<s<<'\n';
        while(true){
            //cout<<s[i]<<' ';
            if(s[i]!=',') num+=s[i];
            else{
                if((stoi(num))<200){
                    sizes.push_back(stoi(num));
                }
                else{
                    i++;
                    break;
                }
                num="";
            }
            i++;
        }
        
        vector<string> strs;
        for(auto x : sizes){
            strs.push_back(s.substr(i,x));  
            i+=x;
        }
        return strs;
    }
};