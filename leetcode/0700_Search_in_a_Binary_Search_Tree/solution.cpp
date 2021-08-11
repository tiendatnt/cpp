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

    TreeNode* secondSolution(TreeNode* root, int val) {
        while (root) {
            if (root->val > val)
                root = root->left;
            else if (root->val < val)
                root = root->right;
            else
                return root;
        }
        return nullptr;
    }

public:
    TreeNode* searchBST(TreeNode* root, int val) {
        //return firstSolution(root, val);
        return secondSolution(root, val);
    }
};
