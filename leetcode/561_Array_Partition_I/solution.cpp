class Solution {
private:
    int firstSolution(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int maxSum = 0;
        for (int i = 0, N = nums.size(); i < N; i += 2) {
            maxSum += nums[i];
        }
        return maxSum;
    }

public:
    int arrayPairSum(vector<int>& nums) {
        return firstSolution(nums);
    }
};
