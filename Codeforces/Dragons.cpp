#include <bits/stdc++.h> 
#include <algorithm>
using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    vector <pair <int, int> > v;
    for (int i=0;i<n;i++){
        int xi,yi;
        cin>> xi>>yi;
        v.push_back(make_pair(xi, yi));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if(s <= v[i].first){
            cout << "NO";
            return 0;
        } else {
            s += v[i].second;
        }
    }
    cout << "YES";
}