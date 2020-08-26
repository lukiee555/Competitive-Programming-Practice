//inversion in array are
//for i < j -> a[i] > a[j];
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<pair<int, int>, null_type,
             less<pair<int, int>>, rb_tree_tag,
             tree_order_statistics_node_update>
    new_data_set;

void inversionCount(int arr[], int n)
{
    int ans[n];
    new_data_set St;

    for (int i = 0; i < n; i++)
    {
        int cur = St.order_of_key({arr[i],n + 1});
        ans[i] = St.size() - cur;
        St.insert({arr[i], i});
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {5, 2, 3, 2, 3, 8, 1};
    int n = sizeof(arr) / sizeof(int);

    inversionCount(arr, n);

    return 0;
}