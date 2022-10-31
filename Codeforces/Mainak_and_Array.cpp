#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		int arr[n];
		for (int i=0;i<n;i++){
		cin>>arr[i];
		}	
		// for (int i=0;i<n;i++){
		// cout<<arr[i];
	 	// }
		int a,b,c;
		a=arr[0];
		b=arr[n-1];
		c=b-a;
		for (int i=0;i<n-1;i++){
		c=max(arr[i]-arr[i+1],c);
		c=max(arr[i]-a,c);
		c=max(b-arr[i+1],c);
	}

	cout<<c<<endl;
	}
}