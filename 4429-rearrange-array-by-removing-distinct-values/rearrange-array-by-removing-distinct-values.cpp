class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        map<int,int>mpp;

        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        while(!mpp.empty()){
            vector<int>vec;
            for(auto &it:mpp){
                ans.push_back(it.first);
                it.second--;
                if(it.second==0)vec.push_back(it.first);
            }
        for(int i: vec){
            mpp.erase(i);
        }
        }
        return ans;
    }
};