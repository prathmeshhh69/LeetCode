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
    string makeGood(string s) {
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(st.empty())st.push(s[i]);
            else {
                char topChar=st.top();
                if(abs(s[i]-topChar)==32)st.pop();
                else st.push(s[i]);
            }
        }
        string result=getString(st);
        reverse(result.begin(),result.end());
        return result;
    }
};