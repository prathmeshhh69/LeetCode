class Solution {
public:
    int lengthOfLastWord(string s) {
         int length=0, i=0;
         reverse(s.begin(), s.end());
         while(s[i]==' ')i++;
         while(s[i]!=' ' && s[i]!='\0'){
            length++;
            i++;
         };
         return length;
    }
};