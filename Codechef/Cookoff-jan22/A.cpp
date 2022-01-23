// ॐ
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (x < y && x < z)
    {
        cout << "NOTHING\n";
        return;
    }
    if (y > x)
        cout << "BURGER\n";
    else
        cout << "PIZZA\n";
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
