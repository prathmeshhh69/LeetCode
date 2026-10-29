class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, r = 0;
        long long maxSum = 0, currSum = 0;
        unordered_map<int, int> mpp;

        while (r < n) {
            currSum += nums[r];
            mpp[nums[r]]++;
            r++;

            while (mpp[nums[r - 1]] > 1 || (r - l) > k) {
                mpp[nums[l]]--;
                currSum -= nums[l];

                if (mpp[nums[l]] == 0) {
                    mpp.erase(nums[l]);
                }

                l++;
            }

            if ((r - l) == k) {
                maxSum = max(maxSum, currSum);
            }
        }

        return maxSum;
    }
};