class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      sort(strs.begin(), strs.end()); 
      if(strs.empty())return "";
      int n=strs.size();
      string prefix="";
      string first=strs[0];
      string last=strs[n-1];
      for(int i=0; i<min(first.length(),last.length()); i++){
        if(first[i]==last[i])prefix.push_back(first[i]);
        else break;
      }
      return prefix;
      }
    
};