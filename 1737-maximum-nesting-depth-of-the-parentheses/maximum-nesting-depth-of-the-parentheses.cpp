class Solution {
public:
    int maxDepth(string s) {
        int ans=INT_MIN;
        stack<int>st;
        for(char c:s){
            if(c=='(')st.push(c);
            else if(c==')')st.pop();
            int currSize=st.size();
            ans=max(ans,currSize);
        }
        return ans;
    }
};