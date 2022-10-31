#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    vector<int> arr;
    string st="";
    for (int i=0;i<str.size();i++){
        if ((str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')){
            i+=2;
            arr.push_back(-1);
        }
        else{
            arr.push_back(i);
        }
    }
    int i=0;
    while(arr[i]==-1) {
        i++;
    }
    for (;i<arr.size();i++){
        if (arr[i] == -1){
            cout << " ";
        }
        else {
            cout << str[arr[i]];
        }
    }
}