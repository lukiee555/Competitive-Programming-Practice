int findPeakUtil(vector<int> arr, int low, int high, int n) 
{ 
    int mid = low + (high - low)/2;  
    
    if ((mid == 0 || arr[mid-1] <= arr[mid]) && 
            (mid == n-1 || arr[mid+1] <= arr[mid])) 
        return mid; 
  
    else if (mid > 0 && arr[mid-1] > arr[mid]) 
        return findPeakUtil(arr, low, (mid -1), n); 

    else return findPeakUtil(arr, (mid + 1), high, n); 
} 

int Solution::solve(vector<int> &A) 
{
    
    return A[findPeakUtil(A, 0, A.size()-1, A.size())]; 
    // int maxElement = INT_MIN;
    // for(int i = 0; i < A.size(); i++){
    //     maxElement = max (maxElement, A[i]);
    // }
    // return maxElement;
}