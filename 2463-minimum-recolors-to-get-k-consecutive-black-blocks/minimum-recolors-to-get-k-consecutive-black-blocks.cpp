class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int minOperations=INT_MAX,operations=0;
        int l=0,r=0,n=blocks.size(),count=0;
        while(r<n){
            if(count<k){
                if(blocks[r]=='W'){
                    operations++;
                }
                count++;
                r++;
            }
            if(count==k){
                minOperations=min(operations,minOperations);
                count--;
                if(blocks[l]=='W'){
                    operations--;
                }
                l++;
            }
        }
        return minOperations;
    }
};
