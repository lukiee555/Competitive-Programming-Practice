string Solution::solve(string A) {
    int n;
    string s=A;
    sort(s.rbegin(),s.rend());
    if(s==A)
        return "-1";
        
    n=A.size();
    int i;
    int k;
    for(i=n-1;i>0;i--)
        if(A[i]>A[i-1]){
            k=i-1;
            break;
        }

    if(i==0)
        return "-1";
    int x=A[k];
    int mi=i;
    int j;
    
    for(j=i+1;j<n;j++)
        if(A[j]>x && A[j]<A[mi])
            mi=j;

    swap(A[mi],A[k]);
    sort(A.begin()+i,A.end());

    return A;
}
