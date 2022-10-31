#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    int j=0;
    while (test--){
        int k ;
        int count=0;
        cin>> k;
        int arr[k];
        int new_arr[k]
        for (int i=0;i<k;i++){
            cin >>arr[i]; 
        }
        for (int i=0;i<k-1;i++){
            if (arr[i]> arr[i+1]){
                    new_arr[j]=arr[i];
                    arr[i]=0;
                    j++;
                    count++;
            }
            else{
                new_arr[j]=0;
                j++;
            }
            if (arr[i] )
        }
    }
}