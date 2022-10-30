int findTriplets(int arr[], int n)
    { 
        //Your code here
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k = j+1;k<n;k++)
                {
                    sum = arr[i]+arr[j]+arr[k];
                    if(sum == 0)
                    {
                        return 1;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }
        return 0;
    }