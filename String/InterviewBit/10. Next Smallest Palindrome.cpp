string makePalindrome(string input){
    int i=0; 
    int j=input.size()-1;
    while(i<j){
        input[j]=input[i];
        i++;
        j--;
    }
    return input;
}

string Solution::solve(string A) {
    int n=A.size();
    string temp=makePalindrome(A);
    if(temp.compare(A)>0) return temp;
    int carry=1;
    for(int i=(n-1)/2; i>=0; i--){
        int t=A[i]-'0'+carry;
        if(t==10){
            t=0;
            carry=1;
        }
        else carry=0;
        A[i]='0'+t;
    }
    string ans;
    if(carry==1) ans = "1";
    ans += A;
    return makePalindrome(ans);
}