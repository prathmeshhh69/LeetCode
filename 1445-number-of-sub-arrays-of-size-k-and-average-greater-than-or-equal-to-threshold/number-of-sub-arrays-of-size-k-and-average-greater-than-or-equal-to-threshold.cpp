class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        //optimal sliding window approach
        int n=arr.size();
        int l=0,r=0,subarrayCount=0;
        int currSum=0;
        while(r < n){
            if((r-l) < k){
               currSum+=arr[r];
               r++;
            }
            if((r-l)==k){
                if(currSum>= k*threshold)subarrayCount++;
                currSum-=arr[l];
                l++;
            }
        }
        return subarrayCount;
    }
};