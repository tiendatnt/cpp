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
    TreeNode* firstSolution(TreeNode* root, int val) {
        if (!root)
            return nullptr;

        if (root->val < val)
            return firstSolution(root->right, val);

        if (root->val > val)
            return firstSolution(root->left, val);

        return root;
    }

public:
    TreeNode* searchBST(TreeNode* root, int val) {
        return firstSolution(root, val);
    }
};
