#include <bits/stdc++.h> 
using namespace std;

int main(){
    int bear,aniki;
    cin >> bear >> aniki;
    int count =0;
    while(bear <= aniki){
        bear=bear*3;
        aniki=aniki*2;
        count++;
    }
    cout << count;
}