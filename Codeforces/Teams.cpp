#include <bits/stdc++.h> 
using namespace std;

int main(){
    int test_case;
    int count=0;
    cin >> test_case;
    while(test_case--){
        int a,b,c;
        cin >>a>>b>>c;
        if (a+b+c>=2){
            count++;
        }
    }
    cout << count;
}