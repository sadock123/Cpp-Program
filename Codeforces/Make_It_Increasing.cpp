#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
cin>>s;
string ans="";
int i;

for(int i=0;i<n;i++){

if(s[i]!='0')
{
	int temp=stoi(s[i]);
	ans+=(char)(96+temp);
}
else
{
   
  string stc="";
  stc+=s[i-2];
  stc+=s[i-1];

   int temp=stoi(stc);
   ans+=(char)(96+temp);

}



}

	reverse(ans.begin(),ans.end());
cout<<ans<<endl;
    }
}