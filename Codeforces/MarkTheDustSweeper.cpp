#include <bits/stdc++.h> 

using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int arr[n];
        long long int sum=0;
        for (int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum+arr[i];
            
        }
        sum=sum-arr[n-1];
        if (sum%2==0 and sum>0){
            cout<<sum+1<<endl;
        }
        else if (sum==0){
            cout<<sum<<endl;
        }
        else{
            cout<<sum+2<<endl;
        }
    }
}