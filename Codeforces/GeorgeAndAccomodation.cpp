#include <bits/stdc++.h>
using namespace std;

int main(){
    int test,p,q,count=0;
    cin>> test;
    while (test--){
        cin>>p>>q;
        if (q-p>=2){
            count++;
        }
    }
    cout<<count;
}