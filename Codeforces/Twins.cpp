#include <bits/stdc++.h>
using namespace std;

int main(){
    int coins,counter=0,sum=0;
    cin >> coins;
    vector<int> values;
    for (int i=0;i<coins;i++){
        int j;
        cin>>j;
        values.push_back(j);
        sum+=values[i];
    }
    int sum2=(sum/2);
    int sum3=0;
    sort(values.begin(),values.end());
    for (int i=coins-1;i>=0;i--){
        if (sum2>=sum3){
            sum3+=values[i];
            counter++;
        }
        else{
            break;
        }
    }
    cout <<counter;
}