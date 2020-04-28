class MinStack {
public:
    /** initialize your data structure here. */
    stack<int>s;
    stack<int>t;
    int p=INT_MAX;
    MinStack() {  
    }
    
    void push(int x) {
        s.push(x);
        if(!t.empty())
        p=min(x,t.top());
        else
         p=x;  
        t.push(p);
    }
    
    void pop() {
        s.pop();
        t.pop();
        if(s.empty())
            p=INT_MAX;
        
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return t.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */