//problem link :-- https://codeforces.com/problemset/problem/1324/D

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<pair<int, int>, null_type,
             less<pair<int, int>>, rb_tree_tag,
             tree_order_statistics_node_update>
    PBDS;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
        c[i] = a[i] - b[i];
    
    PBDS St;
    long long int  count = 0;

    for(int i = 0; i < n; i++){
        ans += St.size() - St.order_of_key({-c[i], 10000000});
        St.insert({c[i],i});
    }
        
    cout<<ans;

    return 0;
}