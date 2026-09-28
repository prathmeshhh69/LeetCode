class Solution {
public:
    int maxDepth(string s) {
        int parenCount=0;
        int ans=INT_MIN;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                parenCount++;
            }
            if(s[i]==')'){
                
                parenCount--;
            }
            ans=max(ans,parenCount);
        }
        return ans;

    }
};