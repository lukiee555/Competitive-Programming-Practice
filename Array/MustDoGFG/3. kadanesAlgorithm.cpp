#include<iostream>
using namespace std;

int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int cs = 0;
    int ms = 0;
    for(int i = 0; i < n; i++){
        cs = cs + arr[i];
        if(cs < 0)
            cs = 0;
        ms = max(cs,ms);
    }
    return ms;
    
}
//Above program can be optimized further, if we compare max_so_far with max_ending_here 
//only if max_ending_here is greater than 0.
int maxSubArraySumm(int a[], int size) 
{ 
   int max_so_far = 0, max_ending_here = 0; 
   for (int i = 0; i < size; i++) 
   { 
       max_ending_here = max_ending_here + a[i]; 
       if (max_ending_here < 0) 
           max_ending_here = 0; 
  
       /* Do not compare for all elements. Compare only    
          when  max_ending_here > 0 */
       else if (max_so_far < max_ending_here) 
           max_so_far = max_ending_here; 
   } 
   return max_so_far; 
} 
//The implementation handles the case when all numbers in array are negative.
int maxSubArraySum(int a[], int size) 
{ 
   int max_so_far = a[0]; 
   int curr_max = a[0]; 
  
   for (int i = 1; i < size; i++) 
   { 
        curr_max = max(a[i], curr_max+a[i]); 
        max_so_far = max(max_so_far, curr_max); 
   } 
   return max_so_far; 
} 
//To print the subarray with the maximum sum, we maintain indices whenever we get the maximum sum.
int maxSubArraySumPrint(int a[], int size) 
{ 
    int max_so_far = INT_MIN, max_ending_here = 0, start =0, end = 0, s=0; 
  
    for (int i=0; i< size; i++ ) 
    { 
        max_ending_here += a[i]; 
  
        if (max_so_far < max_ending_here) 
        { 
            max_so_far = max_ending_here; 
            start = s; 
            end = i; 
        } 
  
        if (max_ending_here < 0) 
        { 
            max_ending_here = 0; 
            s = i + 1; 
        } 
    } 
    cout << "Maximum contiguous sum is "<< max_so_far << endl; 
    cout << "Starting index "<< start << endl << "Ending index "<< end << endl; 
} 

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        cout<<maxSubarraySum(a,n)<<endl;
    }
    return 0;
}