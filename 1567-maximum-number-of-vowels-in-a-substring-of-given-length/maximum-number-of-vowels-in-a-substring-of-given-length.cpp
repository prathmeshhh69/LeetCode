class Solution {
public:
    int maxVowels(string s, int k) {
        int maxVowels=0,vowels=0;
        int l=0,r=0;
        int n=s.size();

        while(r<n){
            if((r-l)<k){
                if(s[r]=='a' || s[r]=='i' || s[r]=='e' || s[r]=='o' || s[r]=='u'){
                    vowels++;
                }
                r++;
            }
            if((r-l)==k){
                maxVowels=max(maxVowels,vowels);
                if(s[l]=='a' || s[l]=='i' || s[l]=='e' || s[l]=='o' || s[l]=='u'){
                    vowels--;
                }
                l++;
            }
        }
        return maxVowels;
    }
};