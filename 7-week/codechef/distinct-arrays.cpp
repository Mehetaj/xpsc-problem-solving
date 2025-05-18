#include <bits/stdc++.h>
using namespace std;
#define aI 998244353
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        ll res = 1;

        for (ll i = 0; i < n; i++)
        {
            ll find = a[i] - i;
            if (find <= 0)
            {
                res = 0;
                break;
            }
            res = (res * (find % aI)) % aI;
        }

        cout << res << '\n';
    }

    return 0;
}