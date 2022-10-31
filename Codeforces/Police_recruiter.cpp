#include <bits/stdc++.h> 

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0,count=0;
    for (int i=0;i<n;i++){
        cin>> arr[i];
    }
    for (int i=0;i<n;i++){
        if (arr[i]>0){
            sum=sum+arr[i];
        }
        else{
            if (sum<1){
                count++;
            }
            else{
                sum--;
            }
        }
    }
    cout<< count;
}