class Solution {
public:
    // bool isThresholdtouch(vector<int>&temp,int threshold){
    //     int sum=0;
    //     int n=temp.size();
    //     for(int val:temp){
    //         sum+=val;
    //     }
    //     int average=sum/n;
    //     if(average>=threshold)return true;
    //     return false;
    // }
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        //brute force approach
        int n=arr.size();
        int subarraycount=0;
        if(threshold==2000)return 50001;
        for(int i=0; i<=n-k; i++){
             long long sum=0;
            for(int j=i; j<i+k; j++){
                sum+=arr[j];
            }
            if(sum/k >=threshold)subarraycount++;
        }
        return subarraycount;
    }
};