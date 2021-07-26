int Solution::solve(int A)
{
    long int ans = 0, div = 2, mod = 1000000007;
    ans += A / 2 + A % 2;
    for (int i = 1; i < 32; i++)
    {
        div *= 2;
        ans += (A / div) * div / 2;
        int rem = A % div;
        ans %= mod;
        if (rem / (div / 2))
            ans += (rem % (div / 2) + 1);
        ans %= mod;
    }
    return ans % mod;
}