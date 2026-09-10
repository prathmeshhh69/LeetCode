class MinStack {
public:
    stack<long long int>st;
    long long int mini=INT_MAX;
    MinStack() {
        
    }
    
    void push(long long int value) {
      if(st.empty()){
        mini=value;
        st.push(value);
      }
      else {
        if(value>mini)st.push(value);
        else {
            st.push(2*value-mini);
            mini=value;
        }
      }
    }
    
    void pop() {
        if(st.empty())return;
        long long int x=st.top();
        st.pop();

        if(x<mini){
            mini=2*mini-x;
        }
    }
    
    int top() {
        if(st.empty())return -1;
        long long int x=st.top();
        if(mini<x)return x;

        return mini;
    }
    
    int getMin() {
        return mini;
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