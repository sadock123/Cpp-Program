  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        //using unordered_maps
        vector<int> res;
        unordered_map<int, int> ans;
        for(int i=0;i<n;i++){
            ans[arr[i]]++;
        }
        for(auto j:ans){
            if(j.second >= 2){
                res.emplace_back(j.first);
            }
        }
        if(res.size()==0){
            return {-1};
        }
        sort(res.begin(), res.end());
        return res;
    }
};