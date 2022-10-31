#include <bits/stdc++.h> 

using namespace std;

int main(){
    int n,count=1;
    cin >>n;
    int magnet[n];
    for (int i=0; i<n; i++){
        cin>> magnet[i];
    }
    for (int i=1;i<n;i++){
        if (magnet[i]!=magnet[i-1]){
            count++;
        }
    }
    cout<<count;
}