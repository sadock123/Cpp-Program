class Solution{
public:	
	
	void zigZag(int arr[], int n) {
	    // code here
        //at even position element is less then at odd position
        for(int i=0;i<n-1;i++){
            if(i%2==0 && arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
            else if(i%2!=0 && arr[i]<arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
	}
};