#include <bits/stdc++.h>
using namespace std;

int main(){
    int len, time;
    string str;
    cin >> len >> time;
    cin >> str;
    while (time--){
        for (int i=0; i <len; i++){
            if (str[i]=='B' && str[i+1]=='G'){
                str[i]='G';
                str[i+1]='B';
                ++i;
            }
        }

    }
    cout << str;
}