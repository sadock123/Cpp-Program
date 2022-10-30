

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        unordered_map<char, int> mp;
        for(int i=0; i<str.length(); i++){
            mp[str[i]]++;
        }
        int m = INT_MIN;
        char c='z';
        for(auto x:mp){
            m = max(m, x.second);
        }
        for(auto i: mp){
            if(i.second == m){
                //take min because we want lexicographically smallest
                c = min(i.first, c);
            }
        }
        return c;
    }

};