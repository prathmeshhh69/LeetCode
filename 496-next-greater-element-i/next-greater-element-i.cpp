class Solution {
public:
    vector<int>nextgreater(vector<int>&nums2){
        stack<int>st;
        vector<int>ans(nums2.size(), 0);

        for(int i=nums2.size()-1; i>=0; i--){
            while(st.size()>0 && st.top()<=nums2[i])st.pop();
            if(st.empty())ans[i]=-1;
            else ans[i]=st.top();
            st.push(nums2[i]);
        }
        return ans;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         vector<int>nextgreatervala=nextgreater(nums2);
         unordered_map<int,int>mpp;
         for(int i=0; i<nextgreatervala.size(); i++){
            mpp[nums2[i]]=nextgreatervala[i];
         }

         vector<int>ans;
         for(int i=0; i<nums1.size(); i++){
            ans.push_back(mpp[nums1[i]]);
         }
         return ans;
    }
};