#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the length of the array";
    cin >>n;
    int arr[n];
    int count=0;
    
    //for input of the values in array
    for (int i =0; i<n; i++){
        cin >> arr[i];
    }
    int max_element=-1;
    for (int i=0;i<n;i++){
        if ((arr[i]> max_element) && (arr[i]>=arr[i+1])){
            count++;
            max_element=max(arr[i],max_element);
        }
    }
    cout << count;
}