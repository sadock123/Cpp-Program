Hi folks! I created a list of backtracking problems that can be useful to practice to solve more problems during interview / contest. Backtracking algorithm is straightforward, but when it comes to real problems sometimes it is not obvious how we should tweak the algorithm.
Let's check the basic description and template of backtracking algorithm:

Wikipedia: Backtracking is a general algorithm for finding solutions to some computational problems, notably constraint satisfaction problems, that incrementally builds candidates to the solutions, and abandons a candidate ("backtracks") as soon as it determines that the candidate cannot possibly be completed to a valid solution.

void backtrack(arguments) {
	if (condition == true) { // Condition when we should stop our exploration.
		result.push_back(current);
		return;
	}
	for (int i = num; i <= last; i++) {
		current.push_back(i); // Explore candidate.
		backtrack(arguments);
		current.pop_back();   // Abandon candidate.
	}
}
One thing to remember before we can jump to some backtracking problems:
	1. Permutation: can be thought of number of ways to order some input.
		○ Example: permutations of ABCD, taken 3 at a time (24 variants): ABC, ACB, BAC, BCA, ...
	2. Combnation: can be thought as the number of ways of selecting from some input.
		○ Example: combination of ABCD, taken 3 at a time (4 variants): ABC, ABD, ACD, and BCD.
	3. Subset: can be thought as a selection of objects form the original set.
		○ Example: subset of ABCD: 'A', 'B', 'C', 'D,' 'A,B' , 'A,C', 'A,D', 'B,C', 'B,D', 'C,D', 'A,B,C', ...
From now let's start to apply this algorithm to solve some backtracking problems.
	• Permutations:
this set of problems related to generating (subset of) all possible permutations. Let's have a look at fist problem: Permutations
In this problem we should return ALL the possible permutations from DISTINCT integer array.
	
void backtrack(vector& nums, vector>& res, 
		vector<int>& cur, unordered_set<int>& used) {
	if (cur.size() == nums.size()) { // (1)
		res.push_back(cur);
		return;
	}
	for (int i = 0; i < nums.size(); i++) {
		if (!used.count(nums[i])) {  // (2)
			cur.push_back(nums[i]);
			used.insert(nums[i]);
			backtrack(nums, res, cur, used);
			cur.pop_back();          // (3)
			used.erase(nums[i]);
		}
	}
}
// Or we can implement backtrack() without using unordered_set<>.
void backtrack2(vector<int>& nums, int ind,
		   vector<vector<int>>& res) { // (1)
	if (ind == nums.size()) {
		res.push_back(nums);
		return;
	}
	for (int i = ind; i < nums.size(); i++) { // (2)
		swap(nums[i], nums[ind]);
		backtrack(nums, ind + 1, res);
		swap(nums[i], nums[ind]); // (3)
	}
}
You might notice that we change the original template for a bit:
	1. We stop our exploration if the current array size is equal to the input array size, and we add current array to our result set.
	2. As input array consist of district elements we can use unordered_set to track if this element has used before.
	3. Backtrack: when we explore element we should remove it from vector and unordered_set.
Note: we can also use swap(), but it is easier to show the pattern using unordered_set.

Another variation of the problem is Permutations II.
The only difference between first problem is that we MAY have DUPLICATES in the input array.
void backtrack(vector& nums, vector& cur, vector>& res,
		 unordered_map& hmap) {
	if (cur.size() == nums.size()) { // (1)
		res.push_back(cur);
		return;
	}
	for (auto& [num, freq] : hmap) { // (2)
		if (freq == 0) continue;     // (3)
		freq--;
		cur.push_back(num);
		dfs(nums, cur, res, hmap);
		cur.pop_back();              // (4)
		freq++;
	}
}

// Iterate over the original list, but check if the previous element is the same as current. 
// We need to make this check because using the same element will give us the same result as last iteration.
void backtrack2(vector<int>& nums, vector<int>& temp,
                  vector<vector<int>>& res, unordered_map<int, int>& freq) {
        if (temp.size() == nums.size()) {
            res.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (freq[nums[i]] == 0 || (i != 0 && nums[i] == nums[i - 1])) continue;
            temp.push_back(nums[i]);
            freq[nums[i]]--;
            backtrack(nums, temp, res, freq);
            freq[nums[i]]++;
            temp.pop_back();
        }
    }

Let's check this algorithm and compare to the first problem:
	1. Same as in the frist solution.
	2. Instead of iteration through the original array, we are iterating using unordered_map. This unordered_map was build to have element frequencies.
	3. If element frequency is not equal to zero we can use it as potential candidate and we should decrease the frequency, so it won't used again and again.
	4. Backtrack: remove candidate from the current set of candidates (std::vector) and increase candidate frequency.
Note: we can solve this problem by sorting the input array and change if check in point number 3. We will have a look at this approach in different problem.
	
	• Combinations: we are given two integers n and k, return ALL possible combinations of k numbers out of the range [1, n]. If you want to solve this problem before jumping to the solution, here is the link: Combinations
void backtrack(int num, int last, int k, vector& cur,
		vector<vector<int>>& res) {
	if (cur.size() == k) {  // (1)
		res.push_back(cur);
		return;
	}
	for (int i = num; i <= last; i++) { // (2)
		cur.push_back(i);
		backtrack(i + 1, last, k, cur, res);
		cur.pop_back();
	}
}
// Or we can allocate temp vector in advance and fill the position.
void backtrack2(int ind, int prev, int k, int n, vector<int>& temp,
			   vector<vector<int>>& res) {
	if (ind >= k) {
		res.push_back(temp);
		return;
	}
	for (int p = prev + 1; p <= n; p++) {
		int saved = temp[ind]; // Given the way how we fill temp array - this is not necessary.
		temp[ind] = p;
		backtrack2(ind + 1, p, k, n, temp, res);
		temp[ind] = saved;     // Given the way how we fill temp array - this is not necessary.
	}
}

Let's check what is the difference compared to earlier examples:
	1. Almost the same as in the previous solutions, the key difference is that we need to put current set of elements to the result set when the size will be equal to k.
	2. The second difference is that starting point of iteration will be passed as an argument to each backtrack() call. Or we can pass previous value as in the backtrack2() and start with prev + 1.
	3. Backtrack: remove element from the current set of elements. The same as in first example.
Let's next check another example: Combination Sum II. This time instead of using hash table we will sort th elements before invoking dfs() for the first time.
We are given a collection of candidates and a target number, find ALL UNIQUE combinations in candidates where the candidate numbers sum to target.

    void dfs(int ind, vector& cur, vector>& res,
             vector& cnd, int target) {
        if (target == 0) { // (1)
            res.push_back(cur);
            return;
        }
        for (int i = ind; i < cnd.size(); i++) { // (2)
            if (i > ind && cnd[i] == cnd[i - 1]) continue; // (3)
            if (target - cnd[i] >= 0) {
                cur.push_back(cnd[i]);
                dfs(i + 1, cur, res, cnd, target - cnd[i]);
                cur.pop_back(); // (4)
            }
        }
    }

Let's check for is the difference between others examples:
	1. Here we don't need to check the current array size. If target result is equal to 0 then it means that we find a valid combination and can add it to the current result set.
	2. Almost the same as in earlier example, but we will be iterating untill we reach the end of the candidates.
	3. Remember that we sort candidates array. One trick here i > ind is needed because we are only allowed to use each number in candidates once. Because of the > and not >= we are allowing ourselves to use the element even if it is the same as previous.
	4. Backtrack: the same as in earlier examples.
	• Subsets: we are given an integer array of unique elements, return all possible subsets (the power set). If you want to solve this problem before check the solution, here is the link: Subsets
void dfs(int ind, vector& nums, vector& cur, vector>& res) {
	res.push_back(cur); // (1)
	for (int i = ind; i < nums.size(); i++) { // (2)
		cur.push_back(nums[i]);
		dfs(i + 1, nums, cur, res);
		cur.pop_back(); // (3)
	}
}
Let's check the steps again:
	1. Now we are adding element to the result unconditionally. This is because we need to generate the subsets of integer array.
	2. The same as in previous examples: we are using new element on each dfs() call.
	3. Backtrack: the same as in previous example.
The implementation will be a bit different if the input array has duplicates Subsets II , but we already know how to handle them using sorting:
void dfs(int ind, vector& cur, vector>& res,
		vector& nums) {
	res.push_back(cur);
	for (int i = ind; i < nums.size(); i++) {
		if (i > ind && nums[i] == nums[i - 1]) continue;
		cur.push_back(nums[i]);
		dfs(i + 1, cur, res, nums);
		cur.pop_back();
	}
}

For the last problem in this article let's check more complex / interesting problem that can be solved using backtracking: Word Squares. We are given an array of unique strings words, we need to return all the word squares you can build from words. Note: result word square should be symmetrical across its diagonal.

    vector> wordSquares(vector& words) {
        vector<vector<string>> res;
        vector<string> cur;
        unordered_map> hmap;
        for (auto& w : words) {
            for (int i = 0; i < w.size(); i++) hmap[w.substr(0, i)].push_back(w); // (1)
        }
        dfs(0, words[0].size(), res, cur, hmap);
        return res;
    }
    void dfs(int ind, int sz, vector>& res, vector& cur,
           unordered_map>& hmap) {
        if (ind == sz) { // (2)
            res.push_back(cur);
            return;
        }
        string pref;
        for (int i = 0; i < ind; i++) pref += cur[i][ind]; // (3)
        for (auto& w : hmap[pref]) { // (4)
            cur.push_back(w);
            dfs(ind + 1, sz, res, cur, hmap);
            cur.pop_back(); // (5)
        }
    }

The dfs() algorithm here is almost the same, but let's check the key points:
	1. Prerequisite: we will use unordered_map to generate prefixes for each word before the first call of dfs().
	2. If our current vector of strings has the same size as original list of words, then we should add it to our result set and stop exploring.
	3. One extra step compared to all others examples is that we are generating the prefix that is needed for the next word to satisfy the problem requirement.
	4. Iterating through the possible candidates that starts with the given prefix.
	5. Backtrack: the same as for others problems.
Links to the problems above + some more problems to practice:
	1. Permutations: https://leetcode.com/problems/permutations/
	2. Permutations II: https://leetcode.com/problems/permutations-ii/
	3. Combinations: https://leetcode.com/problems/combinations/
	4. Combination Sum: https://leetcode.com/problems/combination-sum/
	5. Combination Sum II: https://leetcode.com/problems/combination-sum-ii/submissions/
	6. Combination Sum III: https://leetcode.com/problems/combination-sum-iii/
	7. Subsets: https://leetcode.com/problems/subsets/submissions/
	8. Subsets II: https://leetcode.com/problems/subsets-ii/submissions/
	9. Palindrome Partitioning: https://leetcode.com/problems/palindrome-partitioning/submissions/
	10. Generate parenthesis: https://leetcode.com/problems/generate-parentheses/
	11. Letter Combinations: https://leetcode.com/problems/letter-combinations-of-a-phone-number/solution/
	12. Word search: https://leetcode.com/problems/word-search/
	13. N-Queens: https://leetcode.com/problems/n-queens/
	14. Sudoku solver: https://leetcode.com/problems/sudoku-solver/
	15. Word Squares: https://leetcode.com/problems/word-squares/

From <https://leetcode.com/discuss/study-guide/1405817/backtracking-algorithm-problems-to-practice> 
