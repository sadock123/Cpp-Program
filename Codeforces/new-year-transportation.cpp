#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n];
    int p = 0;

    for(int i = 0; i < n; i++) cin >> arr[i];

    while(p < t - 1)
     {
        p += arr[p];
        cout<<p<<endl;
     }

    if(p == t - 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
