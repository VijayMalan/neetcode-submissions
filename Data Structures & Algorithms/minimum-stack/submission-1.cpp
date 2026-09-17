class MinStack {
public:
    stack<int>st;
    stack<int>mst;

    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        if(mst.empty()){
            mst.push(val);
        }
        else{
        int mn = mst.top();
        if(val>mn){
            mst.push(mn);
        }
        else{
            mst.push(val);
        }
    }
    }
    void pop() {
        st.pop();
        mst.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mst.top();
    }
};
