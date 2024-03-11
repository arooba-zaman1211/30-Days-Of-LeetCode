<h2><a href="https://leetcode.com/problems/product-of-array-except-self/">238. Product of Array Except Self</a></h2><h3>Medium</h3><hr><div><p>Given an integer array <code>nums</code>, return <em>an array</em> <code>answer</code> <em>such that</em> <code>answer[i]</code> <em>is equal to the product of all the elements of</em> <code>nums</code> <em>except</em> <code>nums[i]</code>.</p>

<p>The product of any prefix or suffix of <code>nums</code> is <strong>guaranteed</strong> to fit in a <strong>32-bit</strong> integer.</p>

<p>You must write an algorithm that runs in&nbsp;<code>O(n)</code>&nbsp;time and without using the division operation.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> [24,12,8,6]
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [-1,1,0,-3,3]
<strong>Output:</strong> [0,0,9,0,0]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-30 &lt;= nums[i] &lt;= 30</code></li>
	<li>The product of any prefix or suffix of <code>nums</code> is <strong>guaranteed</strong> to fit in a <strong>32-bit</strong> integer.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong>&nbsp;Can you solve the problem in <code>O(1)</code>&nbsp;extra&nbsp;space complexity? (The output array <strong>does not</strong> count as extra space for space complexity analysis.)</p>
</div>

<br>
Compute products to the left of each element:

We start with an array result initialized to contain all 1s. This array will store the product of all elements to the left of each index.
We iterate through the array from left to right. For each element at index i, we compute the product of all elements to its left (excluding itself) and store it in result[i].
To compute this product efficiently, we use a variable leftProduct initialized to 1. For each element at index i, we update result[i] by multiplying it with leftProduct and update leftProduct by multiplying it with the element at index i. This way, result[i] contains the product of all elements to the left of the element at index i.
<br>
Compute products to the right of each element:

We start with an array result initialized to contain the products computed in the previous step. This array now stores the product of all elements to the left of each index.
We iterate through the array from right to left. For each element at index i, we compute the product of all elements to its right (excluding itself) and multiply it with result[i] to get the final product for that index.
