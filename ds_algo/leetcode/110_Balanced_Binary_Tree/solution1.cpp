/*
 * 1. Idea:
 * for each node in tree, calculate height of left subtree and height of right subtree.
 * if differece of the heights is greater than 1, return false.
 *
 * 2. Algorithm
 * TC = O(N^2) with N is number of nodes of the tree.
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
    int calculateHeight(TreeNode* root) {
        if (!root)
            return 0;

        int maxHeightSubtree = max(calculateHeight(root->right), calculateHeight(root->left));
        return maxHeightSubtree + 1;
    }
public:
    bool isBalanced(TreeNode* root) {
        if (!root)
            return true;
        int hLeftSubtree = calculateHeight(root->left);
        int hRightSubtree = calculateHeight(root->right);
        if (abs(hLeftSubtree - hRightSubtree) > 1)
            return false;
        return (isBalanced(root->right) && isBalanced(root->left));
    }
};