// ॐ
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve()
{
    int n, s = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    sort(a, a + n);
    s -= a[n - 1];
    double ans = 0.0;
    ans = double(s) / double(n - 1);
    ans += a[n - 1];
    cout << fixed << setprecision(6);
    cout << ans << "\n";
}

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}