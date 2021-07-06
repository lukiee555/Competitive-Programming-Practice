//Solution - 1 O(NLogN) Sorting + Greedy  Method
/*
-> Sort the intervals, with respect to their end points.
-> Now, traverse through all the intervals, if we get two overlapping intervals,
then greedily choose the interval with lower end point since, choosing 
it will ensure that intervals further can be accommodated without any overlap.
-> Apply the same procedure for all the intervals and return the count of intervals which satisfy the above criteria.
*/
bool cmp(vector<int> A, vector<int> B){
    return A[1]<B[1];
}
int Solution::solve(vector<vector<int>> &A) {
    int count = 1;
    sort(A.begin(), A.end(), cmp);
    int endtime = A[0][1];
    for(int i = 1 ; i < A.size() ; i++){
        if(A[i][0] > endtime){
            count++;
            endtime =  A[i][1];
        }
    }
    return count;
}
