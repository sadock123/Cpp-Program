#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,minvalue=1000,maxvalue=0;
    cin>>n;
    int maxindex=0;
    int minindex=0;
    
   for(int i=0;i<n;i++){
	int x;
	cin>>x;
if(x>maxvalue){
	maxindex=i;
	maxvalue=x;
}
 if(x<=minvalue){
	minindex=i;
	minvalue=x;
 }
   }
    if(maxindex>minindex){
	    cout<<(maxindex-1)+(n-minindex)-1;
}
    else{
	    cout<<(maxindex-1)+(n-minindex);

}
}
