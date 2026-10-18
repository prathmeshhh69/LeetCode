class Solution {
public:
    int minDeletions(vector<int>& nums) {
        stack<int>st;
        int minDelete=0;
        for(int i=0; i<nums.size(); i++){
            if(st.empty())st.push(nums[i]);
            else{
                char topNum=st.top();
                if(nums[i]==topNum){
                     continue;
                }
                else st.push(nums[i]);
            }
        }
        minDelete=nums.size()-st.size();
        return minDelete;
    }
};