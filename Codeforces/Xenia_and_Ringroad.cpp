#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m;
    cin>>n>>m;
    long long int arr[m];
    for (long long int i=0;i<m;i++){
        cin>>arr[i];
    }
    long long int sum=arr[0]-1;
    for (long long int i=1;i<m;i++){
        if (arr[i]>arr[i-1]){
            sum+=(arr[i]-arr[i-1])%n;
        }
        else if (arr[i]<arr[i-1]){
            sum+=(n-arr[i-1]+arr[i])%n;
        }
    }
    cout<<sum;
}