//n raised to the power p
#include <iostream>
using namespace std;
int Pow(int n, int p){
    if (p==0){
        return 1;
    }
    return n* Pow(n,p-1);
}
int main(){
    int n,p;
    cin>> n >>p;
    cout << "value of n raised to the power p is " << Pow(n,p);
    return 0;
}