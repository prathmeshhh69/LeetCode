class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int totalSum=0, n=mat.size();
        map<pair<int, int>, int>mpp;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat.size(); j++){
                if((i==j || i+j == n-1) && mpp[{i, j}]!=-1){
                    totalSum+=mat[i][j];
                    mpp[{i, j}]=-1;
                    }
            }
        }
        return totalSum;
    }
};