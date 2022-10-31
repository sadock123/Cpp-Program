#include <bits/stdc++.h> 
using namespace std;

//error

int main(){
    int test;
    cin>>test;
    while (test--){
        int n,H,M;
        cin>>n>>H>>M;
        int initial_time=H*60+M;
        int min_time=24*60;
        while(n--){
            int h,m;
            cin>>h>>m;
            int diff=0;
            int time=h*60+m;
            if ( time>= initial_time){
            diff=abs(initial_time-time);
            }
            else{
            time=(h*60+m)+24*60;
            diff=abs(initial_time-time);
            }
            min_time=min(min_time,diff);
        }
        cout<< min_time/60<<" "<< min_time-60*(min_time/60)<<endl;
    }
}
