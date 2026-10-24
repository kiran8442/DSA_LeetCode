class MinStack {
public:
    std::stack<long int> s;
    std::stack<long int> min;
    MinStack() {
        
    }

    void push(long int value) {
        if(min.empty())
            min.push(value);
        else
        {
            long int minimum = min.top();
            if(value < minimum)
                min.push(value);
            else
                min.push(minimum);
        }
        s.push(value);
    }
    
    void pop() {
        min.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */