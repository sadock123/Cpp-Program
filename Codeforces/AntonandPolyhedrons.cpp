#include <bits/stdc++.h>
using namespace std;
//error
int main(){
    int n;
    cin>>n;
    string cat;
 while (n--)
{
    int count=0;
   
    cin>>cat;
    if (cat=="Tetrahedron"){
        count=count+4;
    }
    else if (cat=="Cube"){
        count=count+6;
    }
    else if (cat=="Octahedron"){
        count=count+8;
    }
    else if (cat=="Dodecahedron"){
        count=count+12;

    }
    else if (cat=="Icosahedron"){
        count=count+20;

    }
   
    
}
 cout<<count;
 return 0;
}