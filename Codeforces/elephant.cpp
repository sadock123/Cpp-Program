#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int n;
    cin>>n;
    int step=0;
    while(n){
        if (n>5){
            n=n-5;
            step++;
        }
        else{
            n=0;
            step++;     
    }
    
}
cout <<step;
}