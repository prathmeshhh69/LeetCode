class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int currSum=0;
        int subarrayCount=0;
        for(int i=0; i<n; i++){
            currSum=0;
            for(int j=i; j<n; j++){
                currSum+=nums[j];
                if(currSum==k)subarrayCount++;
            }

        }
        return subarrayCount;
    }
};