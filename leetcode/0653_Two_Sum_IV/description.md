<div>

Given the `root` of a Binary Search Tree and a target number `k`, return _`true` if there exist two elements in the BST such that their sum is equal to the given target_.

**Example 1:**

![](https://assets.leetcode.com/uploads/2020/09/21/sum_tree_1.jpg)

<pre><strong>Input:</strong> root = [5,3,6,2,4,null,7], k = 9
<strong>Output:</strong> true
</pre>

**Example 2:**

![](https://assets.leetcode.com/uploads/2020/09/21/sum_tree_2.jpg)

<pre><strong>Input:</strong> root = [5,3,6,2,4,null,7], k = 28
<strong>Output:</strong> false
</pre>

**Example 3:**

<pre><strong>Input:</strong> root = [2,1,3], k = 4
<strong>Output:</strong> true
</pre>

**Example 4:**

<pre><strong>Input:</strong> root = [2,1,3], k = 1
<strong>Output:</strong> false
</pre>

**Example 5:**

<pre><strong>Input:</strong> root = [2,1,3], k = 3
<strong>Output:</strong> true
</pre>

**Constraints:**

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 10<sup>4</sup>]</code>.</li>
	<li><code>-10<sup>4</sup> <= Node.val <= 10<sup>4</sup></code></li>
	<li><code>root</code> is guaranteed to be a <strong>valid</strong> binary search tree.</li>
	<li><code>-10<sup>5</sup> <= k <= 10<sup>5</sup></code></li>
</ul>

</div>