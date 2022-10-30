Why Fenwick tree?
Consider the following problem. You are given an array of integer values and you are asked to find the range sum between index [i, j]. Note that one-based indexing is used. This can be done easily in O(n) time. But now suppose you have to find the range sum between any two indices multiple times. You can construct a prefix sum array which will take O(n) time for construction. To find the sum between index [i, j] you can find prefixSum(j) - prefixSum(i-1). You can answer any query in O(1) time which is fast.
Suppose you want to change the value of some element in the original array. You can do this in O(1) time. But you will now need to reconstruct the prefixSum array again which will take upto O(n) time. As you can see, if there are multiple update queries, this solution takes a lot of time. Fenwick trees solve this problem as it takes O(logn) time for both updates and finding range sum. Fenwick tree was first described in the paper titled "A new data structure for cumulative frequency tables" (Peter M. Fenwick, 1994).

In a Fenwick tree, a certain cell is responsible for other cells as well. The position of the first non-zero bit from right in the binary representation of the index of the cell determines the range of responsibility of that cell below itself. Let’s call this position RSB(rightmost set bit). Also, note that the positions from the right are one-based. The range of responsibility is 2^(RSB - 1).
For example, the binary representation of 5 is 00101. So the range of responsibility will be 2^(1 - 1) = 1. For 12, the binary representation is 01100. So the range of responsibility will be 2^(3 - 1) = 4. The following table represents the range of responsibility for numbers from 1 to 16.
image

The construction of Fenwick tree is explained later. For now, suppose we have our Fenwick tree ready.
How to handle range queries?
We will first look at how to compute prefix sum up to a certain index which will eventually help us in finding range sum. Suppose you want to find prefix sum from 1 to i. Then you should start at index i and go downwards until you reach 0, adding the value at each index you land at.

Suppose you want to find prefix sum up to index 5. Initialise answer with tree[5] and i with 5. Now subtract the current range of responsibility from i which is 1. Therefore i = i - 1 i.e. i = 4 now. Again add tree[4] to the answer and subtract the current range of responsibility from i which is 4. The index i becomes 0 . So we have got prefix sum from [1,5] as our answer which is tree[5] + tree[4] in this case.

Similarly do the same thing for finding prefix sum of [1, 15]. See the following table to understand how prefix sum up to 15 is calculated. The green regions are the ones that have been used to find the answer.
image

Therefore prefixsum(15) = tree[15] + tree[14] + tree[12] + tree[8].
We need a maximum log2(n)(as the maximum number of set bits can be log2(n)) operations to find the prefix sum. Thus the time complexity of range sum is O(logn). Now you can find range sum from index [i, j] by using range_sum[i, j] = prefixsum[j] - prefixsum[i-1]

Pseudo code for range query:

function prefix_sum(i):
	sum = 0
	while i > 0:
		sum += tree[i]
		i  -= RSB(i)
	return sum
	
function range_query(i, j):
	return prefix_sum(j) - prefix_sum(i-1)
Where RSB(i) returns the range of responsibilty of i. RSB is implemented later.

How to handle point updates?
Point updates are the opposite of range queries. We will have to add the RSB to propagate the value upwards to the cells which are responsible for the current cell.
image

As you can see from the table above, if we want to update the value at index 9 by increasing the value in the original array at index 9 by x, we would have to propagate upwards from 9 to 10, 10 to 12 and 12 to 16.
So the required updates are:

tree[9] += x
tree[10] += x
tree[12] += x
tree[16] += x
Pseudo code for point update:

function update(i, x):
	arr[i] += x
	while i < n:
		tree[i] += x
		i += RSB(i)

How to construct the Fenwick tree?
This is the first step that you have to do before answering any range sum or point update queries. You can create a tree with all values 0 initially and then do point updates for each index which will take O(nlogn) time, but we can do better than this.
We can construct the tree in linear time. The idea is to add the value in the current cell to next immediate cell that is responsible for the current cell. It resembles the method for point updates but one cell at a time. This creates a cascading effect by propagating the value in each cell throughout the tree.
Let our current position be i. The immediate position responsible for i is i + RSB(i). We can consider cell i + RSB(i) as the parent of cell i. Note that if parent cell is out of bounds, we have to ignore this update.

Pseudo code for construction of Fenwick tree:

function build(array):
	n = len(array)
	tree = array.copy()
	for i = 1 to N:
		j = i + RSB(i)
		if j < n:
			tree[j] += tree[i]
	return tree

How does RSB work:
RSB of i is i & -i. The reason it works is the negative of a number is produced by inverting the number, then adding 1 (that's the definition of two's complement). When you add 1, every bit starting at the bottom that is set will overflow into the next higher bit; this stops once you reach a zero bit. Those overflowed bits will all be zero, and the bits above the last one affected will be the inverse of each other, so the only bit left is the one that stopped the cascade - the one that started as 1 and was inverted to 0.

Below is the python code for the problem 307. Range Sum Query - Mutable.

class NumArray:
    def findRSB(self, i):
        return i & -i
    
    
    def __init__(self, nums: List[int]):
        self.n = len(nums) + 1
        self.nums = [0] + nums
        self.tree = [0 for i in range(self.n)]
        
        
        for i in range(1, self.n):
            self.tree[i] = self.nums[i]
            
        for child in range(1, self.n):
            parent = child + self.findRSB(child)
            if parent < self.n:
                self.tree[parent] += self.tree[child]
        

    def update(self, index: int, val: int) -> None:
        index += 1
        toAdd = val - self.nums[index]
        self.nums[index] = val
        i = index
        while i < self.n:
            self.tree[i] += toAdd
            i += self.findRSB(i)
        

    def prefixSum(self, i):
        ans = 0
        while i != 0:
            ans += self.tree[i]
            i -= self.findRSB(i)
            
        return ans
    
    def sumRange(self, left: int, right: int) -> int:
        return self.prefixSum(right + 1) - self.prefixSum(left)
The above explanation was for range queries and point updates. We can also use Fenwick tree for range updates and point queries and range updates and range queries. I will explain briefly the modifications which we need to do for each of these cases.

Range updates and point queries.
The Fenwick tree is initialized with zeros. Suppose that we want to increment the interval [l,r] by x. We make two point update operations on Fenwick tree which are update(l, x) and update(r + 1, -x). If we want to get the value of ith position, we just need to take the prefix sum using the ordinary range sum method.
To see why this works, we can just focus on the increment operation. If i < l then the two update operations have no effect on the query and we get the sum 0. If i belongs to [l,r] then we get the answer x because of the first update operation. And if i > r, then the second update operation will cancel the effect of the first one.

Range updates and range queries.
For this case we need two BITs tree1 and tree2 initialised with zeros. We want to increment the range [l, r] by x. We need to perform two point updates on tree1 : update(tree1, l, x) and update(tree1, r+1, -x). Also we need to perform two point updates on tree2 : update(tree2, l, x*(l-1)), update(tree2, r+1, -x*r)).
To find prefix sum [1, i] we need to find prefixsum(tree1, i)*i - prefixsum(tree2, i). And to find range sum [i, j], we need to find prefix_sum(j) - prefix_sum(i-1). I will not explain the working behind this as it is easy and also the post is becoming too long.

Related Questions on LC:
218. The Skyline Problem
315. Count of Smaller Numbers After Self
327. Count of Range Sum
493. Reverse Pairs
1649. Create Sorted Array through Instructions

Please upvote the post if you found it useful and please comment down any mistakes/suggestions.