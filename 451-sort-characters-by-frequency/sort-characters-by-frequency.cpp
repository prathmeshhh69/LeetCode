class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(char ch:s){
            mpp[ch]++;
        }

        vector<pair<int,char>>vec;
        for(auto it:mpp){
            vec.push_back({it.second,it.first});
        }

        sort(vec.rbegin(),vec.rend());
        string ans;
        for(auto it :vec){
           ans.append(it.first,it.second);
        }
        return ans;
    }
};