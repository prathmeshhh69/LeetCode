class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mpp;
        int n=nums.size();
        for(int i=1; i<=n; i++){
             mpp[i]=1;
        }
        for(int i=0; i<n; i++){
            mpp[nums[i]]=-1;
        }
        for(auto it: mpp){
            if(it.second==1)ans.push_back(it.first);
        }
        return ans;
    }
};