#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    int in,out,total,maximum;
     total=0;
    maximum=0;
    while (test--){ 
        cin >> out>> in;
        total = total+ in-out;
        maximum = max(maximum,total);
    }
    cout << maximum << endl;
}