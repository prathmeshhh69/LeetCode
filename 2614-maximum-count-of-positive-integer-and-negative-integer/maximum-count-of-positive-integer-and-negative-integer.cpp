class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int niggacount=0, pussycount=0;
        for(int val: nums){
            if(val<0)niggacount++;
            else if(val>0)pussycount++;
        }
        return max(niggacount,pussycount);
    }
};