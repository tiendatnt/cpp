<div>

Given an integer array `nums` of `2n` integers, group these integers into `n` pairs `(a1, b1), (a2, b2), ..., (an, bn)` such that the sum of `min(ai, bi)` for all `i` is **maximized**. Return _the maximized sum_.

**Example 1:**

<pre><b>Input:</b> nums = [1,4,3,2]
<b>Output:</b> 4
<b>Explanation:</b> All possible pairings (ignoring the ordering of elements) are:
1. (1, 4), (2, 3) -> min(1, 4) + min(2, 3) = 1 + 2 = 3
2. (1, 3), (2, 4) -> min(1, 3) + min(2, 4) = 1 + 2 = 3
3. (1, 2), (3, 4) -> min(1, 2) + min(3, 4) = 1 + 3 = 4
So the maximum possible sum is 4.</pre>

**Example 2:**

<pre><b>Input:</b> nums = [6,2,6,5,1,2]
<b>Output:</b> 9
<b>Explanation:</b> The optimal pairing is (2, 1), (2, 5), (6, 6). min(2, 1) + min(2, 5) + min(6, 6) = 1 + 2 + 6 = 9.
</pre>

**Constraints:**

*   `1 <= n <= 10<sup>4</sup>`
*   `nums.length == 2 * n`
*   `-10<sup>4</sup> <= nums[i] <= 10<sup>4</sup>`

</div>