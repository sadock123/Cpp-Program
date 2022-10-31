#include <bits/stdc++.h>
using namespace std;
int main(){
int total;
cin >> total;
string ans="Easy";
int people[total];
for (int i=0;i<total;i++){
    cin>>people[i];
}
for (int i=0;i<total;i++){
    if (people[i]==1){
        ans="HARD";
        break;
    }
    
}
cout <<ans;
}