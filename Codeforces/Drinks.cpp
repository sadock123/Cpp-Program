#include <bits/stdc++.h> 

using namespace std;
//error
int main(){
    int n;
    double k=0.0000;
    cin>>n;
    for (int i=0;i<n;i++){
        int j;
        cin>>j;
        
        k+=j/n;
        cout<<k;
    }
    

}