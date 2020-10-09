/*
 * 1. Idea:
 * For each node, store left child and right child in temporary variables.
 * After that, cross assigned.
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
    TreeNode* invertTree(TreeNode* root) {
        if (!root)
            return NULL;
        TreeNode* left = invertTree(root->right);
        TreeNode* right = invertTree(root->left);
        root->right = right;
        root->left = left;
        return root;
    }
};