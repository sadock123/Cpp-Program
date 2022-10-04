#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int k,l;
    int steps=0;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cin>> n;
            if (n==1){
                    k=i;
                    l=j;
            }
        }
    }
    cout << abs(k-2)+abs(l-2);


}