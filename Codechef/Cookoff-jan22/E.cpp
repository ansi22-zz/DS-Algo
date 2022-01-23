// ॐ
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int
int a[1000], b[1000];

void solve()
{

    int n;
    cin >> n;
    int ans[n], j = 0, k = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            ans[i] = a[j];
            j++;
        }
        else
        {
            ans[i] = b[k];
            k++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";
}

void pre()
{

    int tempo = 2;
    for (int i = 0; i < 1000; i++)
    {
        a[i] = tempo;
        tempo += 4;
    }
    tempo = 5;
    for (int i = 0; i < 1000; i++)
    {
        b[i] = tempo;
        tempo += 4;
    }
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
    pre();
    while (t--)
        solve();
    return 0;
}
