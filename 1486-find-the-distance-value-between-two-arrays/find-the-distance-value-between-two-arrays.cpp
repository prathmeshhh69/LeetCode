class Solution {
public:
    bool ifAllElements(int n, vector<int>&arr2,int d){
      int k=arr2.size();
      for(int i=0; i<k; i++){
          int temp=abs(n-arr2[i]);
          if(temp <= d)return false;
      }
      return true;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        for(int i=0; i<arr1.size(); i++){
            bool result=ifAllElements(arr1[i],arr2,d);
            if(result)count++;
        }
        return count;
    }
};