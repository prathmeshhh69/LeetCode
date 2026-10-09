class Solution {
public:
    vector<int> nextGreaterIndex(vector<int> &temperatures){
        stack<int>st;
        vector<int>result(temperatures.size(),0);
        int n=temperatures.size();
        for(int i=n-1; i>=0; i--){
            while(st.size()>0 && temperatures[st.top()]<=temperatures[i])st.pop();
            // if(st.empty())temperatures[i]=0;
            if(!st.empty()){
                result[i]=st.top()-i;
            }
            st.push(i);
        }
        return result;
    }
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       vector<int>ans= nextGreaterIndex(temperatures);
        return ans;
    }
};