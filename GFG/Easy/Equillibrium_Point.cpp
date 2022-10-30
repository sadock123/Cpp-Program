    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        // Your code here
        long long int suml = 0;
        long long int sumr = 0;
        for(int i=0; i<n;i++){
            suml+=a[i];
        }
        for(int i=0;i<n;i++){
            suml-=a[i];
            if(suml == sumr){
                return (i+1);
            }
            sumr+=a[i];
        }
        return -1;
    }

};