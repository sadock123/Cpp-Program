//to convert uppercase to lowercase or vice versa
#include <iostream>
#include <string>

using namespace std;
int main(){
    string a;
    getline(cin,a);
    
    
    for (int i=0;i< a.size();i++){
        //convert upper case
        if (a[i]>='a' && a[i]<='z'){
            a[i]-=32;
        }
        //convert lower case
        else if (a[i]>='A' && a[i]<='Z'){
            a[i]+=32;
        }
    }
    cout << a;
}