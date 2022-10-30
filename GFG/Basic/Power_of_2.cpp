bool isPowerofTwo(long long n){
        
        // Your code here    
        if(n==1)
        {
            return true;
        }
        for (ulong power = 1; power > 0; power = power << 1)
        {
            
            if (power == n)
            {
                return true;
            }
            
            if (power > n)
            {
               return false;
            }
        }
        return false;
        
    }