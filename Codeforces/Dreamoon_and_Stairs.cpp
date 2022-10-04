#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k=0;
    cin>>n>>m;
    if (n<m){
        cout<<"-1";
    }
    else {
        if (n%2==0){
            k=n/2;
        }
        else{
            k=n/2+1;
        }
        
        while (k%m!=0){
            k++;
    } 
    cout<<k;
}
}
