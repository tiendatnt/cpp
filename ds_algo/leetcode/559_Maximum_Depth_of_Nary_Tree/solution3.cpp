/*
 * 1. Idea:
 * Not good but we can reuse node's value to mark depth of the node.
 * First, create a queue to store the nodes will be visited (initialize the queue with the root node)
 * After that, check front node until queue empty. For each front node,
 * - if there is no children, update the node's value to max depth.
 * - if the front node has some children, push its children to the queue with children's value = parent's value + 1
 * Before visit next node, remember to dequeue the current front node.
 *
 * 2. Algorithm
 * TC = O(N) with N is number of nodes of the tree.
 * SC = O(N) with N is number of nodes of the tree.
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
public:
    int maxDepth(Node* root) {
        if (root == NULL)
            return 0;
        
        int maximumDepth = 0;
        queue<Node*> q;
        root->val = 1;
        q.push(root);
        while (!q.empty()) {
            Node* node = q.front();
            int numChildren = node->children.size();
            for (int i = 0; i < numChildren; i++) {
                node->children[i]->val = node->val + 1;
                q.push(node->children[i]);
            }
            if (numChildren == 0)
                maximumDepth = max(maximumDepth, node->val);
            q.pop();
        }
        return maximumDepth;
    }
};