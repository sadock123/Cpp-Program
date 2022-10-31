#include <bits/stdc++.h>
using namespace std;

int main(){
    int friends,fences,ans=0;
    cin >> friends>> fences;
    int arr[friends];
    for (int i=0;i<friends;i++){
        cin>> arr[i];
    }
    for (int i=0;i<friends;i++){
        if (arr[i]> fences){
            ans=ans+2;
        }
        else{
            ans++;
        }
    }
    cout << ans;
}