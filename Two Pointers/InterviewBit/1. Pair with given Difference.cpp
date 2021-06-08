int Solution::solve(vector<int> &A, int B) {
    sort(A.begin() ,A.end());
    int i=0,j=0;
    while(i< A.size() && j<A.size()){
        if(A[j]-A[i] == B && i!=j )
            return 1;
        else
            if(A[j]-A[i] < B)
                j++;
        else
            i++;
    }
    return 0;
}
