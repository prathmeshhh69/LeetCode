class Solution {
public:
    int countGoodSubstrings(string s) {
        int substringCount=0;
        int n=s.size();
        //brute force approach
        unordered_map<char,int>mpp;
      
        for(int i=0; i<=n-3; i++){
            set<char>st;
            for(int j=i; j<i+3; j++){
                 st.insert(s[j]);
                 if(st.size()==3)substringCount++;
            }
        }
        return substringCount;
    }
};