#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the length of the array";
    cin >>n;
    int arr[n];
    //for input of the values in array
    for (int i =0; i<n; i++){
        cin >> arr[i];
    }
    for (int j=0; j<n-1;j++){
        for (int k=j;k < n; k++){
            if (arr[k]< arr[j]){
                int temp;
                temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }
        }
    }
    for (int i =0; i<n; i++){
        cout << arr[i] << " ";
    }
}