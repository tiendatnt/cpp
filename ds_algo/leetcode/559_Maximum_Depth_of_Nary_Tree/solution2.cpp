/*
 * 1. Idea:
 * Tracking the current depth we are in.
 * - when visting a node, the current depth should be increased by 1.
 * - when leaving the node, the current depth should be descreased by 1.
 * - if the visiting node doesn't have children nodes, update the current depth to maximum depth.
 *
 * 2. Algorithm
 * TC = O(N) with N is number of nodes of the tree.
 * SC = O(H) with H is height (depth) of the tree.
 *    In the bad case, SC = O(N)
 *    In the best case, SC = O(logN)
 */
/*
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
private:
    void traversal(Node* root, int& currDepth, int& answer) {
        if (root == NULL)
            return;

        currDepth++;
        int numChildren = root->children.size();
        for (int i = 0; i < numChildren; i++)
            traversal(root->children[i], currDepth, answer);
        if (numChildren == 0)
            answer = max(answer, currDepth);
        currDepth--;
    }

public:
    int maxDepth(Node* root) {
        int currDepth = 0, answer = 0;
        traversal(root, currDepth, answer);
        return answer;
    }
};