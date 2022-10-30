{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector <int> ans;
        int curr_sum;
        for(int i=0;i<n;i++){
            curr_sum = arr[i];
            for(int j=i+1;j<=n;j++){
                if(curr_sum == s){
                    ans.push_back(i+1);
                    ans.push_back(j);
                    return ans;
                }
                else if(curr_sum>s || j == n){
                    break;
                }
                curr_sum+=arr[j];
            }
        }
        ans.push_back(-1);
        return ans;
    }
};