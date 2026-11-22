class Solution {
public:
    bool checkString(string s) {
        int n=s.size();
        int i=0;
        while(s[i]=='a'){
            i++;
        }
        for(int k=i; k<n; k++){
            if(s[k]=='a')return false;
        }
        return true;
    }
};