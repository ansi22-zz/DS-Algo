// ॐ
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve()
{
    int n;
    cin >> n;
    string s = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < n; i++)
        cout << s[i % 26];
    cout << "\n";
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