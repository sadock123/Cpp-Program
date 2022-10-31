#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    while (a>=1){
        if (a%2 == 0){
            a=a/2;
        }
        else if (a!=1){
            cout <<"Not a power of 2";
            break;
        }
        else if (a==1){
            cout <<"power of 2";
            break;
        }
    }
}