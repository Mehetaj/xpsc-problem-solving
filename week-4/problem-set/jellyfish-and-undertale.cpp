#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll res = b;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            res += min(a - 1, x);
        }
        cout << res << '\n';
    }
    return 0;
}