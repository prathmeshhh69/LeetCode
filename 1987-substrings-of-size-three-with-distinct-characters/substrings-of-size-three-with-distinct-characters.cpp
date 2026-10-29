class Solution {
public:
    int countGoodSubstrings(string s) {
        int substringCount=0;
        int l=0,r=0,n=s.size();
        int maxSubstrings=0;
        unordered_map<char,int>mpp;
        while(r < n){
            //expanding of window
            if(mpp.size() < 3){
                mpp[s[r]]++;
                r++;
            }
            //shrinking of window
            if((r-l)==3){
                if(mpp.size()==3){
                    substringCount++;
                    mpp[s[l]]--;
                    if(mpp[s[l]]==0){
                        mpp.erase(s[l]);
                    }
                }
                else{
                    mpp[s[l]]--;
                    if(mpp[s[l]]==0){
                        mpp.erase(s[l]);
                    } 
                }
                l++; 
            }
        }
        return substringCount;
    }
};