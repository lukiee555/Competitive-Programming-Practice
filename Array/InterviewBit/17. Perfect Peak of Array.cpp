int Solution::perfectPeak(vector<int> &A)
{
    int ans = -1;
    int l[A.size()];
    int r[A.size()];
    l[0] = A[0];
    r[A.size() - 1] = A[A.size() - 1];
    for (int i = 1; i < A.size(); i++)
    {
        l[i] = max(A[i], l[i - 1]);
    }
    for (int i = A.size() - 2; i >= 0; i--)
    {
        r[i] = min(A[i], r[i + 1]);
    }
    for (int i = 1; i < A.size() - 1; i++)
    {
        if (A[i] > l[i - 1] && A[i] < r[i + 1])
        {
            return 1;
        }
    }
    if (ans == -1)
    {
        return 0;
    }
}
