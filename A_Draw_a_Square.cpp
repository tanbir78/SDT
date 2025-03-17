#include <bits/stdc++.h>
using namespace std;
#define int long long
int t = 1, n, m, k;
void solve()
{
    n = 4;
    vector<int> a(n);
    map<int, int> m1;
    for (int i = 0; i < n; i++)
        cin >> a[i], m1[a[i]]++;
    if (m1[a[0]] == 4)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cin >> t;
    while (t--)
        solve();
}
