#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while (test--){
    int n;
    int m=0, min_number=0;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        char k;
        cin>>k;
        if (k==')'){
            m--;
        }
        else if (k=='('){
            m++;
        }
        min_number=min(m,min_number);
    }
    cout<<abs(min_number)<<endl;

    }

}