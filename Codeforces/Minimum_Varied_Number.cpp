#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
    int n;
    cin>>n;
    vector<int> ans;
    for (int i=9;i>0;i--){
        if (n>=i){
            n-=i;
            ans.push_back(i);
        }
    }

    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i];
    }
    cout<<endl;
}
}