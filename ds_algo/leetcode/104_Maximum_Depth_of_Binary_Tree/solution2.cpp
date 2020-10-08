/*
 * 1. Idea:
 * Tracking the current depth we are in.
 * - when visting a node, the current depth should be increased by 1.
 * - if the visiting node doesn't have children nodes, update the current depth to maximum depth.
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
private:
    int maxDepthSubtree;
    void traversal(TreeNode* root, int currDepth) {
        if (root == NULL)
            return;
        traversal(root->right, currDepth + 1);
        traversal(root->left, currDepth + 1);
        maxDepthSubtree = max(currDepth, maxDepthSubtree);
    }
public:
    int maxDepth(TreeNode* root) {
        maxDepthSubtree = 0;
        traversal(root, 1);
        return maxDepthSubtree;
    }
};