/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    TreeNode* firstSolution(vector<int>& nums, int start, int end) {
        if (start > end)
            return nullptr;

        int mid = (start + end) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->right = firstSolution(nums, mid + 1, end);
        root->left = firstSolution(nums, start, mid - 1);
        return root;
    }

public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return firstSolution(nums, 0, nums.size() - 1);
    }
};
