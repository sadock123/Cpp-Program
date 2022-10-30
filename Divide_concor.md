Divide and Conquer DP
Divide and Conquer is a dynamic programming optimization.

Preconditions
Some dynamic programming problems have a recurrence of this form:

 
 
where  is a cost function and  when .

Say  and , and evaluating  takes  time. Then the straightforward evaluation of the above recurrence is . There are  states, and  transitions for each state.

Let  be the value of  that minimizes the above expression. Assuming that the cost function satisfies the qudrangle inequality, we can show that  for all . This is known as the monotonicity condition. Then, we can apply divide and conquer DP. The optimal "splitting point" for a fixed  increases as  increases.

This lets us solve for all states more efficiently. Say we compute  for some fixed  and . Then for any  we know that . This means when computing , we don't have to consider as many splitting points!

To minimize the runtime, we apply the idea behind divide and conquer. First, compute . Then, compute , knowing that it is less than or equal to  and  knowing that it is greater than or equal to . By recursively keeping track of the lower and upper bounds on , we reach a  runtime. Each possible value of  only appears in  different nodes.

Note that it doesn't matter how "balanced"  is. Across a fixed level, each value of  is used at most twice, and there are at most  levels.

Generic implementation
Even though implementation varies based on problem, here's a fairly generic template. The function compute computes one row  of states dp_cur, given the previous row  of states dp_before. It has to be called with compute(0, n-1, 0, n-1). The function solve computes m rows and returns the result.


int m, n;
vector<long long> dp_before(n), dp_cur(n);

long long C(int i, int j);

// compute dp_cur[l], ... dp_cur[r] (inclusive)
void compute(int l, int r, int optl, int optr) {
    if (l > r)
        return;

    int mid = (l + r) >> 1;
    pair<long long, int> best = {LLONG_MAX, -1};

    for (int k = optl; k <= min(mid, optr); k++) {
        best = min(best, {(k ? dp_before[k - 1] : 0) + C(k, mid), k});
    }

    dp_cur[mid] = best.first;
    int opt = best.second;

    compute(l, mid - 1, optl, opt);
    compute(mid + 1, r, opt, optr);
}

int solve() {
    for (int i = 0; i < n; i++)
        dp_before[i] = C(0, i);

    for (int i = 1; i < m; i++) {
        compute(0, n - 1, 0, n - 1);
        dp_before = dp_cur;
    }

    return dp_before[n - 1];
}
Things to look out for
The greatest difficulty with Divide and Conquer DP problems is proving the monotonicity of . One special case where this is true is when the cost function satisfies the quadrangle inequality, i.e.,  for all . Many Divide and Conquer DP problems can also be solved with the Convex Hull trick or vice-versa. It is useful to know and understand both!

Practice Problems
AtCoder - Yakiniku Restaurants
CodeForces - Ciel and Gondolas (Be careful with I/O!)
CodeForces - Levels And Regions
CodeForces - Partition Game
CodeForces - The Bakery
CodeForces - Yet Another Minimization Problem
Codechef - CHEFAOR
CodeForces - GUARDS (This is the exact problem in this article.)
Hackerrank - Guardians of the Lunatics
Hackerrank - Mining
Kattis - Money (ACM ICPC World Finals 2017)
SPOJ - ADAMOLD
SPOJ - LARMY
SPOJ - NKLEAVES
Timus - Bicolored Horses
USACO - Circular Barn
UVA - Arranging Heaps
UVA - Naming Babies