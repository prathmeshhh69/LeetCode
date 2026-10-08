class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans="";
        stack<char>st;
        int idx=0;
        bool isfound=false;
        for(int i=0; i<word.size(); i++){
            if(word[i]==ch){
                st.push(word[i]);
                isfound=true;
                idx=i;
                break;
            }
            else {
                st.push(word[i]);
                idx=i;
            }
        }
        if(!isfound)return word;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        // reverse(ans.begin(), ans.end());
        for(int i=idx+1; i<word.size(); i++){
            ans+=word[i];
        }
        return ans;
    }
};