class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        if(source==target)return 0;
        int n=source.size();
        vector<int>diagonal(n,0);
        diagonal[0]=abs(source[0]-target[0]);
        diagonal[1]=abs(source[1]-target[1]);
        if(diagonal[0]==diagonal[1])return 1;
        //check the remainders of the elements of the array
        if((source[0]+source[1])%2!=(target[0]+target[1])%2)return -1;
        return 2;
    }
};