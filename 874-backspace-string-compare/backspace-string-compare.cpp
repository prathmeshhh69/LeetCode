class Solution {
public:
    string getString(stack<char>st){
        string result="";
        while(!st.empty()){
            char topChar=st.top();
            result+=topChar;
            st.pop();
        }
        return result;
    }
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;
        for(char c:s){
            if(c=='#' && st1.empty())continue;
            else if(c=='#' && !st1.empty())st1.pop();
            else st1.push(c);
        }
        for(char c:t){
            if(c=='#' && st2.empty())continue;
            else if(c=='#' && !st2.empty())st2.pop();
            else st2.push(c);
        }
        string first=getString(st1);
        string second=getString(st2);

        return first==second;
    }
};