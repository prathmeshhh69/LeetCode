class Solution {
public:
    bool isCommon(vector<int>nums,int n){
        int k=nums.size();
        for(int i=0; i<k; i++){
            if(nums[i]==n)return true;
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        int m=nums1.size();
        int n=nums2.size();
         
        for(int i=0; i<m; i++){
            bool checkCommon=isCommon(nums2,nums1[i]);
            if(checkCommon){
                st.insert(nums1[i]);
            }
        }
        for(int i=0; i<n; i++){
            bool checkCommon=isCommon(nums1,nums2[i]);
            if(checkCommon){
                st.insert(nums2[i]);
            }
        }
        vector<int>ans;
        for(auto val:st){
            ans.push_back(val);
        }
        return ans;

    }
};