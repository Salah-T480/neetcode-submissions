class Solution {
public:

    string encode(vector<string>& strs) {
        string chaine ="";
        for(auto x: strs){
            chaine+=(to_string(x.length())+'#'+x);
        }        
        return chaine;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        int i=0;
        while(i<s.length()){
            int j =i;
            while(s[j]!='#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            strs.push_back(s.substr(j+1,len));
            i=j+1+len;
        }
        return strs;
    }
};