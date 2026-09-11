class Solution {
public:
    int getGreater(int value,vector<int> &nums2){
           for(int i=0; i<nums2.size()-1; i++){
              if(nums2[i]==value){
                 for(int j=i+1; j<nums2.size(); j++){
                    if(nums2[j]>value)return nums2[j];
                 }     
              }
           }
           return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0; i<nums1.size(); i++){
            int x=getGreater(nums1[i],nums2);
            ans.push_back(x);
        }
        return ans;
    }
};