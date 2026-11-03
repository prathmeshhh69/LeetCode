class Solution {
public:
    bool allElementsEqual(vector<int>& nums) {
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) return false;
        }
        return true;
    }

    int maximumVal(vector<int>& nums) {
        int maxVal = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > maxVal) {
                maxVal = nums[i];
            }
        }
        return maxVal;
    }

    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int target = maximumVal(nums);
        int noofOperations = 0;

        while (!allElementsEqual(nums)) {
            for (int i = 0; i < n; i++) {
                if (nums[i] < target) {
                    nums[i]++;
                    noofOperations++;
                }
            }
        }

        return noofOperations;
    }
};