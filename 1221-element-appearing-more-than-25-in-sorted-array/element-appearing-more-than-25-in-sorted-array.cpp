class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       int n=arr.size();
       if(n==1 || n==0)return arr[0];
       int count=1;
       for(int i=1; i<n; i++){
        if(arr[i]==arr[i-1])count++;
        else count=1;
        if(count>n/4)return arr[i];
       }
       return -1;
    }
};