class Solution {
public:
    string getString(stack<char>st){
        string ans="";
        while(!st.empty()){
            char topChar=st.top();
            ans+=topChar;
            st.pop();
        }
        return ans;
    }
    string removeStars(string s) {
        stack<char>st;
        for(char c:s){
            if(c=='*' && !st.empty())st.pop();
            else st.push(c);
        }
        string result=getString(st);
        reverse(result.begin(),result.end());
        return result;
    }
};