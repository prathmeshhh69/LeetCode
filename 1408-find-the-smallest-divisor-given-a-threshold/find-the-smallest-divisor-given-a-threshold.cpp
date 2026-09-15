class Solution {
public:
    int maxElement(vector<int>&nums){
        int ans=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            ans=max(ans,nums[i]);
        }
        return ans;
    }
    int sumofDivisions(vector<int>&nums,int mid){
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum=sum+ceil((double)nums[i]/mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
       int low=1, high=maxElement(nums), ans=-1;
       while(low<=high){
        int mid=low+(high-low)/2;
        if(sumofDivisions(nums,mid)<=threshold){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
       }
       return ans;
    }
};