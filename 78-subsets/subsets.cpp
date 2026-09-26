class Solution {
public:
    void allsubsets(vector<int>&nums,vector<int>&ans,int i,vector<vector<int>>&subsets){
        if(i==nums.size()){
            subsets.push_back({ans});
            return;
        }

        //include the value in the subset
        ans.push_back(nums[i]);
        allsubsets(nums,ans,i+1,subsets);
        ans.pop_back();

        //exclude the value from the subset
        allsubsets(nums,ans,i+1,subsets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>subsets;
       vector<int>ans;

       allsubsets(nums,ans,0,subsets);
       return subsets;
    }
};