class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int>set1;
       unordered_set<int>set2;
       unordered_map<int,int>mpp;
       
       for(int val:nums1){
        set1.insert(val);
       }
          for(int val:nums2){
        set2.insert(val);
       }

       for(int val: set1){
          mpp[val]++;
       }
        for(int val: set2){
          mpp[val]++;
       }
       int ans=INT_MAX;
       for(auto it: mpp){
        if(it.second==2){
            ans=min(ans,it.first);
        }
       }
       if(ans==INT_MAX)return -1;
       return ans;
    }
};