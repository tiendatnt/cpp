/*
 * 1. Idea:
 * Save leaf nodes (from left to right order) of tree 1 and tree 2 into 2 vector.
 * After that, compare the vector to check if they are similar.
 *
 * 2. Algorithm
 * TC = O(N) with N = max(N1, N2), N1 and N2 are number of nodes of the tree 1 and tree 2.
 * SC = O(H) with H = max(H1, H2), H1 and H2 are height (depth) of the tree 1 and tree 2.
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
    void creatLeafNodes(TreeNode* root, vector<int>& leafNodes) {
        if (!root)
            return;
        if (!root->left && !root->right) {
            leafNodes.push_back(root->val);
        }

        creatLeafNodes(root->left, leafNodes);
        creatLeafNodes(root->right, leafNodes);
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leafNodes1;
        vector<int> leafNodes2;
        creatLeafNodes(root1, leafNodes1);
        creatLeafNodes(root2, leafNodes2);
        return leafNodes1 == leafNodes2;
    }
};