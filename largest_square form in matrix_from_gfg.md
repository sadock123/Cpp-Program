
Largest square formed in a matrix
MediumAccuracy: 49.17%Submissions: 28025Points: 4
Given a binary matrix mat of size n * m, find out the maximum size square sub-matrix with all 1s.
Example 1:
Input: n = 2, m = 2
mat = {{1, 1}, 
       {1, 1}}
Output: 2
Explaination: The maximum size of the square
sub-matrix is 2. The matrix itself is the 
maximum sized sub-matrix in this case.
Example 2:
Input: n = 2, m = 2
mat = {{0, 0}, 
       {0, 0}}
Output: 0
Explaination: There is no 1 in the matrix.
Your Task:
You do not need to read input or print anything. Your task is to complete the function maxSquare() which takes n, m and mat as input parameters and returns the size of the maximum square sub-matrix of given matrix.
Expected Time Complexity: O(n*m)
Expected Auxiliary Space: O(n*m)
Constraints:
1 ≤ n, m ≤ 50
0 ≤ mat[i][j] ≤ 1 

From <https://practice.geeksforgeeks.org/problems/largest-square-formed-in-a-matrix0806/1> 





int maxhisto(vector<int>&height){
   int n=height.size();
     vector<int>left(n),right(n);
     stack<int>stk;
     for(int i=0;i<n;i++){
         while(!stk.empty() and height[i]<=height[stk.top()]){
             stk.pop();
         }
         if(stk.empty()){
             left[i]=0;
         }
         else{
             left[i]=stk.top()+1;
         }
         stk.push(i);
     }
     while(!stk.empty()){
         stk.pop();
     }
     for(int i=n-1;i>=0;i--){
         while(!stk.empty() and height[i]<=height[stk.top()]){
             stk.pop();
         }
         if(stk.empty()){
             right[i]=n-1;
         }
         else{
             right[i]=stk.top()-1;
         }
         stk.push(i);
     }
     int maxi=0;
     for(int i=0;i<n;i++){
         maxi=max(maxi,min(height[i],right[i]-left[i]+1));
         }
     
     return maxi;
}
   int maxSquare(int n, int m, vector<vector<int>> mat){
       // code here
       int maxi=0;
       vector<int>height(m,0);
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(mat[i][j]==1){
                   height[j]++;
               }
               else{
                   height[j]=0;
               }
           }
           int currsize=maxhisto(height);
           maxi=max(maxi,currsize);
       }
       return maxi;
   }

From <https://discuss.geeksforgeeks.org/discuss/prob705423/Largest%20square%20formed%20in%20a%20matrix%20%7C%20Practice%20%7C%20GeeksforGeeks%20/practice/?rel=https%3A%2F%2Fpractice.geeksforgeeks.org%2Fproblems%2Flargest-square-formed-in-a-matrix0806%2F1&mode=light> 
