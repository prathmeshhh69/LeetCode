class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int minOperations=INT_MAX;
        for(int i=0; i<=n-k; i++){
            int operations=0;
            for(int j=i; j<i+k; j++){
                if(blocks[j]=='W')operations++;
            }
            minOperations=min(operations,minOperations);
        }
        return minOperations;
    }
};