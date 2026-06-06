class MinStack {
public:
    vector<pair<int,int>> line;
    int Min ;
    MinStack() {
        
    }
    
    void push(int value) {
        if(line.size()){
            Min=min(Min,value);
        }
        else{
            Min=value;
        }
        line.push_back({value,Min});
    }
    
    void pop() {
        line.pop_back();
        if(line.size())
        Min = line.back().second;
    }
    
    int top() {
        return line.back().first; 
    }
    
    int getMin() {
        return line.back().second;
    }
};
