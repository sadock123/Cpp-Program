#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int x,y;
        cin>>x>>y;
        if(x%y==0) 
	{
	cout<<0<<endl;
	}
	else {
	
	int w=x%y;
	
	cout<<y-w<<endl;
	
	}
    }
}