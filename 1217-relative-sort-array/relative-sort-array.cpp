class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int>mpp;
        vector<int>ans;

        for(int val:arr1){
            mpp[val]++;
        }
        for(int val:arr2){
            while(mpp[val]!=0){
                ans.push_back(val);
                mpp[val]--;
            }
        }
        vector<int>remaining;
         for (int val : arr1) {
            bool found = false;
            for (int x : arr2) {
                if (x == val) {
                    found = true;
                    break;
                }
            }
            if (!found && mpp[val] > 0) {
                while (mpp[val] != 0) {
                    remaining.push_back(val);
                    mpp[val]--;
                }
            }
        }

        sort(remaining.begin(), remaining.end());

        for (int val : remaining) {
            ans.push_back(val);
        }
        return ans;
    }
};