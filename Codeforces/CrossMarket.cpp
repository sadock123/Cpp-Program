#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int m,n;
        cin>>m>>n;
        if(m==1 && n==1){
            cout<<"0"<<endl;
        }
        else{
            int n1=(m>n)?m:n;
            int m1=(m<n)?m:n;
            int ans=0;
            ans=ans+m1+n1-1+m1-1;
            cout<<ans<<endl;
        }
    }

}