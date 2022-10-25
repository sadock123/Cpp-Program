#include <iostream>
using namespace std;


int linearSearch(int arr[], int key, int n){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){

    //Enter the size of array
    int n;
    cin>>n;

    int arr[n];
    //enter the values of array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //Enter the value of key which has to be searched in array
    int key;
    cin>>key;
    
    int index = linearSearch(arr, key, n);

    if(index != -1){
        cout<<"The key is present in array at index: "<<index<<endl;
    }
    else{
        cout<<"The key is not present in the array"<<endl;
    }
    return 0;
}