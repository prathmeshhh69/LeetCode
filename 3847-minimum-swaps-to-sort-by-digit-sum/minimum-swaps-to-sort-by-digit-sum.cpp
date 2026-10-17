class Solution {
public:
    int digitSum(int n){
        int sum=0;
        while(n>0){
            int digit=n%10;
            sum+=digit;
            n=n/10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
       int n=nums.size();

       vector<int>aftersorted(nums);

       auto lambda=[&](int num1,int num2){
        int dig1Sum=digitSum(num1);
        int dig2Sum=digitSum(num2);

        if(dig1Sum!=dig2Sum){
            return dig1Sum<dig2Sum;
        }
        return num1 < num2; 
       };

       sort(begin(aftersorted), end(aftersorted),lambda);

       unordered_map<int,int>mpp;
       for(int i=0; i<n; i++){
        mpp[nums[i]]=i;
       }
       int swapCount=0;
       for(int i=0; i<n; i++){
        int expectedVal=aftersorted[i];
        int currVal=nums[i];

        if(currVal==expectedVal)continue;

        int idx=mpp[expectedVal];

        nums[i]=expectedVal;
        nums[idx]=currVal;

        mpp[expectedVal]=i;
        mpp[currVal]=idx;

        swapCount++;
       }
       return swapCount;
    }
};