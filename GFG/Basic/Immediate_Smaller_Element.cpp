void immediateSmaller(int *arr, int n) {
	    //  code here
	    int temp=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>arr[i+1])
	        {
	            arr[i]=arr[i+1];
	        }
	        else
	        {
	            arr[i] = -1;
	        }
	    }
	    arr[n-1]=-1;
	}