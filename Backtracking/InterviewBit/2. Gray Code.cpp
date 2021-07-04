vector<int> Solution::grayCode(int n)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> ans;
    ans.push_back(0);
    if (n == 0)
        return ans;
    ans.push_back(1);
    int curr = 1;
    for (int i = 2; i <= n; i++)
    {
        curr *= 2;
        for (int j = ans.size() - 1; j >= 0; j--)
        {
            ans.push_back(curr + ans[j]);
        }
    }
    return ans;
}
