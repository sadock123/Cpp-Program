#include<bits/stdc++.h>
using namespace std;
 
#define all(x)     (x).begin(), (x).end()
#define TC(x)          sci(x); while(x --)
#define print(v)     for(int i=0;i<v.size();i++)
#define endl        "\n"
 
int main(){
ios::sync_with_stdio(false);
int t;
cin>>t;
while(t--)
{
 long long n;
cin>>n;
long long mini=0;
long long maxi=-1e9;
while(n--){
    long long a,b;
    cin>>a>>b;
    mini+=min(a,b);
    maxi=max(maxi,max(a,b));
}
if(maxi==-1e9)cout<<0<<endl;
else{
    long long int ans=2*(mini+maxi);
    cout<<ans<<endl;
}  
}
return 0;
}