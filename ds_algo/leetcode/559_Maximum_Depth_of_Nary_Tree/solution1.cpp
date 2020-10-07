/*
 * 1. Idea:
 * max depth of the tree = max(depth of 1st sub-tree + 1, depth of 2nd sub-tree + 1, ..., depth of Nth sub-tree + 1)
 *                       = max(depth of sub-trees) + 1
 *
 * 2. Algorithm
 * TC = O(N) with N is number of nodes of the tree.
 * SC = O(H) with H is height (depth) of the tree.
 *    In the bad case, SC = O(N)
 *    In the best case, SC = O(logN)
 */
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if (root == NULL)
            return 0;
        
        int depth = 0;
        for (int i = 0, N = root->children.size(); i < N; i++)
            depth = max(depth, maxDepth(root->children[i]));

        return ++depth;
    }
};