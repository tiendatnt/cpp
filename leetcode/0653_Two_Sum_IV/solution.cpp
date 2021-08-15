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
    void createIncVector(TreeNode* root, vector<int>& outVect) {
        if(!root)
            return;

        createIncVector(root->left, outVect);
        outVect.push_back(root->val);
        createIncVector(root->right, outVect);
    }
    bool firstSolution(TreeNode* root, int k) {
        vector<int> incVect;
        createIncVector(root, incVect);
        for (int l = 0, r = incVect.size() - 1; l < r; ) {
            if (incVect[l] + incVect[r] > k) {
                --r;
                continue;
            }

            if (incVect[l] + incVect[r] < k) {
                ++l;
                continue;
            }

            return true;
        }
        return false;
    }

public:
    bool findTarget(TreeNode* root, int k) {
        return firstSolution(root, k);
    }
};
