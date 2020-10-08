/*
 * 1. Idea:
 * max depth of the tree = max(depth of left sub-tree + 1, depth of right sub-tree + 1)
 *                       = max(depth of sub-trees) + 1
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
    int maxDepth(TreeNode* root) {
        if (root == NULL)
            return 0;

        int maxDepthSubtree = 0;
        maxDepthSubtree = max(maxDepth(root->right), maxDepth(root->left));
        return maxDepthSubtree + 1;
    }
};