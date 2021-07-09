void Solution::sortColors(vector<int> &A) {
    //One Solution is to use count variable to sort the array
    // TC = O(2N)
    //Solution - 2 Flag Algorithm
    int low = 0;
    int high = A.size() - 1;
    int mid = 0;
    while(mid <= high){
        if(A[mid] == 0){
            swap(A[mid], A[low]);
            low++;
            mid++;
        }else if(A[mid] == 1){
            mid++;
        }else{
            swap(A[mid], A[high]);
            high--;
        }
    }
}
