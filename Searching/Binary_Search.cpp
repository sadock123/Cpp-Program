#include <iostream>
using namespace std;

//Binary search can be applied only on sorted arrays
int binarySearch(int arr[], int key, int l, int r){

    while(l<=r){
        int mid = l+(r-l)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            r--;
        }
        else{}
        l++;
    }
    return -1;
}

int main(){
    //Enter the size of array
    int n;
    cin>>n;

    //Enter the values in array
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //Enter the value of key
    int key;
    cin>>key;
    
    int index = binarySearch(arr, key, 0, n-1);

    if(index != -1){
        cout<<"The key is present at index: "<<index<<endl;
    }
    else{
        cout<<"The key is not present in array"<<endl;
    }
    return 0;
}