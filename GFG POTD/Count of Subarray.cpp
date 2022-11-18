	// #define ll long long
	ll countSubarray(int arr[], int n, int k) {
	    // code here
	    long long ans=0;
	    for(int i=0;i<n;i++){
	        for(int j=i;j<n;j++){
	            if(arr[j]>k){
	            ans+=(n-j);
	            break;
	            }
	        }
	    }
	     return ans;
	}
