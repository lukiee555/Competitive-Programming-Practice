int Solution::isPalindrome(string A) {
    int i = 0;
    int len = A.length();
    // while(i < len){
    //     A[i] = tolower(A[i]);
    //     if(!isalnum(A[i]) || A[i] == ' '){
    //         A.erase(i,1);
    //         len--;
    //     }
    //     else
    //         i++;
    // }
    // i = 0;
    // len = A.length() - 1;
    // //cout<<A;
    // while( i < len){
    //     if(A[i++] == A[len--])
    //         continue;
    //     else
    //         return 0;
    // }
    // return 1;
    
    int j=len-1;
    while(i<=j){
        if(!isalnum(A[i])){
         i++;
         continue;
        }
        if(!isalnum(A[j])){
         j--;
         continue;
        }
        if(A[i]!=A[j]&&abs(A[i]-A[j])!=32)
         return 0;
        
        i++;j--;
    }
    return 1;
    
}
