#include <bits/stdc++.h>
using namespace std;

int main(){
    int matches;
    int a_name=0;
    int d_name=0;
    string name;
    cin>> matches;
    cin >> name;
    for (int i=0;i<matches;i++){
        if (name[i]=='A'){
            a_name++;
        }
        else if (name[i]=='D'){
            d_name++;
        }
    }
    if (a_name==d_name){
        cout <<"Friendship";
    }
    else if (a_name>d_name){
        cout <<"Anton";
    }
    else if (d_name>a_name){
        cout <<"Danik";
    }
}