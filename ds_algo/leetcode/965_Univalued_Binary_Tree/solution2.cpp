/*
 * 1. Idea:
 * Perform preordered traversal.
 * For each visiting node, check if the parent node's value is same as children node's value.
 * If not, return false immediately.
 * 
 *
 * 2. Algorithm
 * TC = O(N) with N is number of nodes of the tree.
 * SC = O(H) with H is height (depth) of the tree.
 *    In the bad case, SC = O(N)
 *    In the best case, SC = O(logN)
 */
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
public:
    bool isUnivalTree(TreeNode* root) {
        if (!root)
            return true;
        if (root->left && root->val != root->left->val)
            return false;
        if (root->right && root->val != root->right->val)
            return false;

        return isUnivalTree(root->right) && isUnivalTree(root->left);
    }
};