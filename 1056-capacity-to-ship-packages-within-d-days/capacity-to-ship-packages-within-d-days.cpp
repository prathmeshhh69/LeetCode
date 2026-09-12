class Solution {
public:
    int maximumElement(vector<int>& weights){
        int max=INT_MIN;
        for(int i=0; i<weights.size(); i++){
            if(weights[i]>max)max=weights[i];
        }
        return max;
    }
    int sumofvector(vector<int>&weights){
        int sum=0;
        for(int i=0; i<weights.size(); i++){
            sum=sum+weights[i];
        }
        return sum;
    }
       int daysrequires(vector<int>& weights, int capacity){
        int days = 1, load = 0;

        for(int i = 0; i < weights.size(); i++){
            if(load + weights[i] > capacity){
                days++;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
         int low=maximumElement(weights), high=sumofvector(weights);
         while(low<=high){
            int mid=low+(high-low)/2;
            int noofdays=daysrequires(weights,mid);
            if(noofdays<=days){
                high=mid-1;
            }
            else low=mid+1;
         }
         return low;
    }
};