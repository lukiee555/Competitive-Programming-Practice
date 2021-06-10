int Solution::solve(string A) {
    int j = A.length() - 1;
    int i = 0;
    int count = 0;
    while(i <= j){
        if(count > 1)
            return 0;
        if(A[i] != A[j]){
            count++;
            i++;
            continue;
        }
        i++;
        j--;
    }
    return 1;
}
