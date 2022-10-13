//to find the maximum frequency of a character in a given array
#include <iostream>
#include <string>

using namespace std;
int main(){
    string a;
    getline(cin,a);
    int freq[26];
   
    for (int i=0;i<26;i++){
        freq[i]=0;
    }
    for (int i=0;i<a.size();i++){
        freq[a[i]-'a']++;
    }
    int maxF=0;
    char ans='a';
    for (int i=0;i<26;i++){
        if (freq[i]>maxF){
            maxF=freq[i];
            ans=i+'a';
        }
    }
    cout << maxF << ans;
    
} 