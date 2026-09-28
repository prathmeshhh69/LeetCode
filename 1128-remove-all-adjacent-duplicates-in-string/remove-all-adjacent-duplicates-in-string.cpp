class Solution {
public:
    string stackstring(stack<char>st){
        string result="";
        while(!st.empty()){
            char character=st.top();
            result+=character;
            st.pop();
        }
        return result;
    }
    string removeDuplicates(string s) {
        stack<char>st;
        for(char c:s){
            if(st.empty())st.push(c);
            else {
                char top=st.top();
                if(c==top)st.pop();
                else st.push(c);
            }
        }
        string ans=stackstring(st);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};