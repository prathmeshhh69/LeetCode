class Solution {
public:
    int minAddToMakeValid(string s) {
       int size=0;
       int openCount=0;

       for(char c:s){
        if(c=='(')size++;
        else if(size>0)size--;
        else openCount++;
       }
       return openCount+size;
    }
};