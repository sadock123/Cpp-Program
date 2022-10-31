#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        long long int k;
        cin>>k;
        if (k==1){
            cout<<0<<endl;
        }
        else if (k%2 ==0){
            cout << (k/2)-1<<endl;
        }
        else{
            cout << (k/2)<<endl;
        }
    }
    return 0;
}