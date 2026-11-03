class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxVal = nums[0];
        
        // Find the maximum value in the array
        for (int x : nums) {
            maxVal = max(maxVal, x);
        }
        
        // Accumulate differences from maxVal
        int noofOperations = 0;
        for (int x : nums) {
            noofOperations += (maxVal - x);
        }
        
        return noofOperations;
    }
};