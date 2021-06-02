int Solution::isPalindrome(int n) {
    if(n<0) 
        return 0;
    int x=n;
    long long res=0;
    while(x){
        res=res*10+x%10;
        x=x/10;
    }
    if(res==n) 
        return 1;
    return 0;
}
