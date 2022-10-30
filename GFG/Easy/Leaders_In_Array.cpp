
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> lead;
        long long maxi = a[n-1];
        for(int i=n-1;i>=0;i--){
            if(a[i]>=maxi){
                maxi = a[i];
                lead.push_back(maxi);
            }
        }
        reverse(lead.begin(), lead.end());
        return lead;
    }
};