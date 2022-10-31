#include <bits/stdc++.h> 

using namespace std;

int main(){
    string str;
    cin>>str;
    int flag=0;
    for (int i=0; i<str.size(); i++){
        if(str[i]>=33&&str[i]<=126){
    if (str[i]=='H' || str[i]=='Q' ||str[i]=='9' ){
        flag=1;
    }
    }
    }
    if (flag){
        cout<<"YES";
    }
    else{
        cout<< "NO";
    }
   
}
//A=65
//H=72 Q=81 9=57 +=43
//
