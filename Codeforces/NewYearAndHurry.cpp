#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,question=0;
    cin>>n>>k;
    int l=240-k;
    int i=1;
    while (l>=5*i && i<=n){
        l=l-5*i;
        i++;question++;
    }
    cout<<question;
}