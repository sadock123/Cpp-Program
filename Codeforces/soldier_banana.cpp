#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int n,k,w;
    cin >> n >> k >> w;
    int sum=0;
    while (w){
        sum=sum+n*w;
        w--;
    }
    if (sum> k){
    cout << sum-k;
    }
    else{
        cout <<0;
    }
}