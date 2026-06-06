class Solution {
public:
    bool isOperand(string x){
        return (x=="+" || x=="*" || x=="/" || x=="-");
    }
    int calculate(int x, int y , string op){
        //cout<<x<<op<<y<<endl;
        if(op=="+") return x+y;
        if(op=="-") return x-y;
        if(op=="*") return x*y;
        return x/y;
    }

    int evalRPN(vector<string>& tokens) {
       stack<int> values ;
        for(auto c : tokens){
            if(!isOperand(c)){
                values.push(stoi(c));
            }
            else{
                int x = values.top();
                values.pop();
                int y = values.top();
                values.pop();
                values.push(calculate(y,x,c));
            }
        }
        return values.top();
    }
};