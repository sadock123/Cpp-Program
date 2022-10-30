{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        vector<int> f1(26,0);
        
    for(int i=0;i<a.size();i++){
        f1[a[i]-'a']++;
    }
    for(int j=0;j<b.size();j++){
        f1[b[j]-'a']--;
    }
    for(int k = 0;k<f1.size();k++){
        if(f1[k]!=0){
            return false;
        }
    }
    return true;
        
    }

};