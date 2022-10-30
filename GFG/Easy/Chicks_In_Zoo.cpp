long long int NoOfChicks(int n){
	    // Code here
	    long long int curr = 1;
	    unordered_map<long long int, long long int> m;
	    m[0] = 1;
	    for(int i=1; i<n; i++){
	        if(i>=6){
	            int e = i-6;
	            curr-=m[e];
	        }
	        long long int new_chicks = curr+(2*curr);
	        m[i] = 2*curr;
	        curr = new_chicks;
	    }
	    return curr;