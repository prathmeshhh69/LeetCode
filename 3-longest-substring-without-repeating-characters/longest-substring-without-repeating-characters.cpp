class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256];
        memset(hash, -1, sizeof(hash));
        int left=0,right=0,maxLength=0;
        int n=s.size();
        while(right<n){
            if(hash[s[right]]!=-1){
                if(hash[s[right]]>=left){
                    left=hash[s[right]]+1;
                }
            }
            int length=right-left+1;
            maxLength=max(maxLength,length);
            hash[s[right]]=right;
            right++;
        }
        return maxLength;
    }
};