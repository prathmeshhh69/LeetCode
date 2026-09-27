class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int n=source.size();
        vector<int>diagonal(n,0);
        if(source==target)return 0;
        //check for diagonal and straight
        // bool checkdiagonal=false;
        diagonal[0]=abs(source[0]-target[0]);
        diagonal[1]=abs(source[1]-target[1]);
        if(diagonal[0]==diagonal[1])return 1;
        
        else if(source[0]==target[0] || source[1]==target[1])return 1;
        return 2;
    }
};