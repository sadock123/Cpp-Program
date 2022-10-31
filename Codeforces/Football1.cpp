#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<string,int> f;
    string arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){

        f[arr[i]]++;
    }
    string k2=0;

    int freq=1;
    for (auto word : f){
        cout<< word.second <<" "<<word.first;
        int k=word.second;
        if (k> freq){
            freq=k;
            k2=word.first;
        }
    }
    cout<<k2;
    return 0;
}
