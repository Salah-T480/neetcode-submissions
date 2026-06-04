class Solution {
public:

    bool isValidLine(vector<int> line){
        for(int i=1;i<line.size();i++){
            if(line[i]==line[i-1]) return false;
        }
        return true;
    }

    bool isValidSub(vector<pair<int,int>> p){
        //cout<<p[0].first<<' '<<p[0].second<<endl;
        for(int i=1;i<p.size();i++){
            //cout<<p[i].first<<' '<<p[i].second<<endl;
            if((p[i].first/3 == p[i-1].first/3) && (p[i].second/3 == p[i-1].second/3) ){ 
                
                return false;}
            
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9);
        vector<vector<int>> colunm(9);
        map<int , vector<pair<int,int>>> map;
        
        for( int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char c = board[i][j];
                if(c != '.'){
                    int num = c-'0';
                    num--;
                    //cout<< num;
                    row[num].push_back(i);
                    colunm[num].push_back(j);
                    map[num].push_back({i,j});
                }
            }
        }
        for(int i=0;i<9;i++){
            sort(row[i].begin(),row[i].end());
            sort(colunm[i].begin(),colunm[i].end());
            auto& v = map[i];
            sort(v.begin(),v.end());
        }
        
        for(int i=0;i<9;i++){
            if(!isValidLine(row[i]) || !isValidLine(colunm[i])) return false;
        }
        //cout<<"BEFORE SUB\n";
        for(int i=0;i<9;i++){
            if(!isValidSub(map[i])) return false;
        }
        return true;
    }
};