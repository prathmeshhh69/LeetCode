class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,r=0,maxLength=0;
        unordered_map<int,int>mpp;
        int n=fruits.size();
        set<int>st;
        while(r<n){
           if(st.size()<=2){
              st.insert(fruits[r]);
              mpp[fruits[r]]++;
              r++;
           }
           while(st.size()>2){
              mpp[fruits[l]]--;
              if(mpp[fruits[l]]==0){
              st.erase(fruits[l]);
              }
              l++;
           }
           int length=r-l;
              maxLength=max(length,maxLength);
        }
        return maxLength;
    }
};