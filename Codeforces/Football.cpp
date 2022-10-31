#include <bits/stdc++.h>
 
using namespace std;

int main(){
    string str;
    string::iterator it;

    cin >> str;
    int index = 0;
    int sum=0;
    int max_sum=0;
for ( it = str.begin() ; it < str.end()-1; it++ ,index++)
{
   if (str[index]==str[index+1]){
        sum++;
        
   }
   else{
    sum=0;
   }
   max_sum=max(max_sum, sum);
}

if (max_sum>=6){
    cout <<"YES";
}
else {
    cout <<"NO";
}
}
