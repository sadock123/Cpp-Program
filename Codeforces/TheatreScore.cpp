#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,a,i,j;
    cin>>n>>m>>a;
    if(m%a!=0)
    {
        if(n%a!=0){
            i = m/a+1;j=n/a+1;
        }
        else {i=m/a+1;j=n/a;}
    }
    else{
        if(n%a!=0){
            i=m/a;j=n/a+1;
        }
        else {i=m/a;j=n/a;}
    }
    cout<<i*j;
}