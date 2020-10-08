/*
 * 1. Idea:
 * min depth of the tree = min(depth of left sub-tree + 1, depth of right sub-tree + 1)
 *                       = min(depth of sub-trees) + 1
 * note that:
 * - sub-tree need to be not NULL
 * - leaf node is a node with no children.
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
    int minDepth(TreeNode* root) {
        if (!root)
            return 0;

        if (!root->right && !root->left)
            return 1;
        
        int minDepthSubtree = 1 << 30;
        if (root->right)
            minDepthSubtree = min(minDepth(root->right), minDepthSubtree);
        if (root->left)
            minDepthSubtree = min(minDepth(root->left), minDepthSubtree);
        
        return minDepthSubtree + 1;
    }
};