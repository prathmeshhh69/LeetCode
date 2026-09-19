class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest=INT_MIN;
        int secondlargest=INT_MIN;
        int first,second=-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>largest){
                largest=nums[i];
                first=i;
            }
        }
        for(int j=0; j<nums.size(); j++){
            if(nums[j]>secondlargest && j!=first){
                secondlargest=nums[j];
                second=j;
                }
        }
        return (nums[first]-1)*(nums[second]-1);
    }
};