class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //now we discuss sliding window nigga
        int l=0,r=0,n=nums.size();
        double count=0,currSum=0, maxSum=INT_MIN;
        while(r<n){
            if(count<k){
               currSum=currSum+nums[r];
               r++;
               count++;
            }if(count==k){
                maxSum=max(currSum,maxSum);
                currSum=currSum-nums[l];
                l++;
                count--;
            }
        }
        double average=maxSum/k;
        return average;
    }
};