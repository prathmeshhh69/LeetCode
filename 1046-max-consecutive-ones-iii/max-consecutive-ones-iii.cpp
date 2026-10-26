class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int l=0,r=0;
       int zeroes=0;
       int maxLength=0,n=nums.size();
       while(r<n){
          if(nums[r]==0){
            zeroes++;
          }
          while(zeroes>k){
            if(nums[l]==0){
                zeroes--;
            }
            l++;
          }
          if(zeroes<=k){
            int length=r-l+1;
            maxLength=max(length,maxLength);
          }
         r++;
       }
       return maxLength;
    }
};