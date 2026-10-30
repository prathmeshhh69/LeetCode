class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int l=0,r=0,substringCount=0;
        unordered_map<char,int>mpp;
        mpp['a']=0;
        mpp['b']=0;
        mpp['c']=0;
        for (int r = 0; r < n; r++) {
            mpp[s[r]]++;
            while (mpp['a'] >= 1 && mpp['b'] >= 1 && mpp['c'] >= 1) {
                substringCount += n - r;
                mpp[s[l]]--;
                l++;
            }
        }
        return substringCount;
    }
};