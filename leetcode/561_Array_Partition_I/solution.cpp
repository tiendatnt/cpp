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

    int secondSolution(vector<int>& nums) {
        vector<int> hashTable(20001, 0);
        for (int num : nums) {
            ++hashTable[num + 10000];
        }

        int maxSum = 0;
        for (int i = 0, j = 0; i <= 20000; ++i) {
            for (; hashTable[i] > 0; --hashTable[i]) {
                ++j;
                if (j % 2 == 0) continue;
                maxSum += (i - 10000);
            }
        }
        return maxSum;
    }

public:
    int arrayPairSum(vector<int>& nums) {
        //return firstSolution(nums);
        return secondSolution(nums);
    }
};
