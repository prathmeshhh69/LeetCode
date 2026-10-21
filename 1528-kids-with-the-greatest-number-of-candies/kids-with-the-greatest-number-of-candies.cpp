class Solution {
public:
    int MaximumCandies(vector<int> nums){
        int maxVal=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>maxVal)maxVal=nums[i];
        }
        return maxVal;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans(candies.size(),false);
        for(int i=0; i<candies.size(); i++){
              candies[i]=candies[i]+extraCandies;
              if(candies[i]==MaximumCandies(candies)){
                ans[i]=true;
              }
              candies[i]=candies[i]-extraCandies;
        }
        return ans;
    }
};