class Solution {
public:
vector<int> moveshunya(vector<int>&nums){
    vector<int>temp;
        for(int val:nums){
            if(val!=0)temp.push_back(val);
        }
        for(int val:nums){
            if(val==0)temp.push_back(val);
        }
        return temp;
}
    void moveZeroes(vector<int>& nums) {
        vector<int>result=moveshunya(nums);
        nums=result;
    }
};