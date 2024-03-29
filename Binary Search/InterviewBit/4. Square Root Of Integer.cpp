#define ll long long int
int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==1) return 1;
    ll low=0,high=A/2;
    ll mid=low+(high-low)/2;
    while(low<=high){
       mid=low+(high-low)/2;
       if(mid*mid<=A&&(mid+1)*(mid+1)>A)
        return mid;
       else if(mid*mid>A) high=mid-1;
       else low=mid+1;
    }
}