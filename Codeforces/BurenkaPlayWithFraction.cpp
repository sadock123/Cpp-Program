#include <bits/stdc++.h>
using namespace std;
//error
int main(){ 
    int test;
    cin>>test;
    while(test--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if (a*d==b*c)
        {
            cout<<0<<endl;
        }
        else if (a == 0 || c == 0 || (a*d) % (b*c) == 0 || (b*c) % (a*d) == 0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
}
}