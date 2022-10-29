package leetcode;

//largest subarray of given sum.

class Solution{
    
   
    // Function for finding maximum and value pair
    public static int lenOfLongSubarr (int A[], int N, int k) {
        //Complete the function
        int i=0;
        int j=0;
        int max=0;
        int sum=0;
        while(j<A.length){
            sum+=A[j];
            if(sum<k){
                j++;
            }
            else if(sum==k){
                if(j-i+1>max){
                    max=j-i+1;
                    // i++;
                    j++;
                }
                
                
            }
            
             else if(sum>k){
                 while(sum>k){
                     sum-=A[i];
                 }
                 i++;
                 j++;
             }
        }
        
        return max;
    }
    
   
    
    
}


