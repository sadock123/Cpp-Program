#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> ans;
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
   
    for (int i=0;i<n;i++){
        ans[arr[i]]=i;
    }
    for (auto x : umap){
        cout<<x.second<<endl;
    }
}