#include <bits/stdc++.h>
using namespace std;
#define iint long long int
int main(){
    // int n,m;
    // cin>>n>>m;
    // int arr[n];
    // vector<pair <int, int> > v;
    // for (int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for (int j=0;j<m;j++){
    //     int k,mm;
    //     cin>>k>>mm;
    //     v.push_back(make_pair(k,mm)); 
    // }
    
    iint m,n;
    cin>>m>>n;
 iint arr[m],arr1[m],arr2[m];
 for(iint i=0;i<m;i++){
    cin>>arr[i];
 }
 

    iint ans=0;
   arr1[0]=0;
    for(iint i=1;i<m;i++){
       if(arr[i-1]>arr[i]){
        ans+=arr[i-1]-arr[i];
       }
       arr1[i]=ans;
    }
    
    
        ans=0;
        arr2[m-1]=0;
        for(iint i=m-2;i>=0;i--){
        if(arr[i+1]>arr[i]){
            ans+=arr[i+1]-arr[i];
       }
       arr2[i]=ans;
    }
    // for(int i=0;i<m;i++){
    //     cout<<arr1[i]<<" ";
    // }
 while(n--){
    iint a,b;
    cin>>a>>b;
    if(a<=b)
    cout<<arr1[b-1]-arr1[a-1]<<endl;
    else
 cout<<arr2[b-1]-arr2[a-1]<<endl;
    
 }


}