#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    set<ll> sum;
    ll l = 0;
    for (int i = 0; i < n; ++i)
    {
        l += a[i];
        sum.insert(l);
    }

    ll res = 0;
    ll r = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        sum.erase(l);
        l -= a[i];
        r += a[i];
        if (sum.count(r))
            res = max(res, r);
    }

    cout << res << '\n';

    return 0;
}