class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int maxproduct=INT_MIN,ans=-1;
       int first,second;
       for(int i=0; i<nums.size(); i++){
          for(int j=i+1; j<nums.size(); j++){
            int currproduct=nums[i]*nums[j];
            if(currproduct>maxproduct){
                maxproduct=currproduct;
                first=i;
                second=j;
            }
          }
       }
       int product=(nums[first]-1)*(nums[second]-1);
       return product;
    }
};