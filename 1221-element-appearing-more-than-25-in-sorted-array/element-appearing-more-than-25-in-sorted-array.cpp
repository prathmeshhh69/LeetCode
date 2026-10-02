class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        float requiredfreq=n/4.0;
        unordered_map<int, int>mpp;

        for(int val: arr)mpp[val]++;

        for(auto it:mpp){
            if(it.second>requiredfreq)return it.first;
        }
        return -1;
    }
};