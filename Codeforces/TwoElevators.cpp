#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int a,b,c;
        cin>>a>>b>>c;
        int k,l;
        k=a-1;
        if (b==1){
            l=2*abs(c-b);
        }
        else if (c==1){
            l=b-c;
        }
        else{
            l=abs(b-c)+(c-1);
        }
        if (k>l){
            cout<<"2";
        }
        else if (l>k){
            cout<<"1";
        }
        else if (l==k){
            cout<<"3";
        }
        cout<<endl;
    }
}