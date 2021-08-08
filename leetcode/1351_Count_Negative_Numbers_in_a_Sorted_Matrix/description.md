<div>

Given a `m x n` matrix `grid` which is sorted in non-increasing order both row-wise and column-wise, return _the number of **negative** numbers in_ `grid`.

**Example 1:**

<pre><b>Input:</b> grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
<b>Output:</b> 8
<b>Explanation:</b> There are 8 negatives number in the matrix.
</pre>

**Example 2:**

<pre><b>Input:</b> grid = [[3,2],[1,0]]
<b>Output:</b> 0
</pre>

**Example 3:**

<pre><b>Input:</b> grid = [[1,-1],[-1,-1]]
<b>Output:</b> 3
</pre>

**Example 4:**

<pre><b>Input:</b> grid = [[-1]]
<b>Output:</b> 1
</pre>	

**Constraints:**

*   `m == grid.length`
*   `n == grid[i].length`
*   `1 <= m, n <= 100`
*   `-100 <= grid[i][j] <= 100`

**Follow up:** Could you find an `O(n + m)` solution?</div>