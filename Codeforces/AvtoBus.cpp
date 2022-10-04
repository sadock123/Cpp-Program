#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        long long int k;
        cin>>k;
        if ((k %2 ==1 || k<3)){
            cout<<-1<<endl;
        }
    
        else {
            cout<<(k+5)/6 << " " << k/4<<endl;
        }
        
        
    }
}