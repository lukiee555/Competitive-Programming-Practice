class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &a)
    {
        int i, k = 0, l = 0;
        int m = a.size();
        int n = a[0].size();
        vector<int> result;
        /* k - starting row index 
        m - ending row index 
        l - starting column index 
        n - ending column index 
        i - iterator 
    */

        while (k < m && l < n)
        {
            /* Print the first row from 
               the remaining rows */
            for (i = l; i < n; ++i)
            {
                result.push_back(a[k][i]);
            }
            k++;

            /* Print the last column 
         from the remaining columns */
            for (i = k; i < m; ++i)
            {
                result.push_back(a[i][n - 1]);
            }
            n--;

            /* Print the last row from 
                the remaining rows */
            if (k < m)
            {
                for (i = n - 1; i >= l; --i)
                {
                    result.push_back(a[m - 1][i]);
                }
                m--;
            }

            /* Print the first column from 
                   the remaining columns */
            if (l < n)
            {
                for (i = m - 1; i >= k; --i)
                {
                    result.push_back(a[i][l]);
                }
                l++;
            }
        }
        return result;
    }
};