#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0,maxcount=0;
    for (int i=0;i<n-1;i++){
        if (arr[i+1]>= arr[i]){
            count++;
        }
        else{
            count=0;
        }
        maxcount=max(count,maxcount);
    }
    cout<<maxcount+1<<endl;
}