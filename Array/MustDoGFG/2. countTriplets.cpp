class Solution{
public:	
	
	int countTriplet(int arr[], int n){
	    
	    int freq[1000005] = {0}; 
      
        for (int i=0; i < n; i++){ 
            freq[arr[i]]++; 
        } 
        int count = 0; 
      
        for(int i = 0;i < n; i++){ 
            for(int j = i+1; j < n; j++){ 
                if(freq[arr[i] + arr[j]]){ 
                    count++; 
                } 
            } 
        } 
    return count; 
	    
	   
	}
};