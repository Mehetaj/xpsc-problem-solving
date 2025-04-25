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
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        ll forced = -1;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != -1)
            {
                ll x_i = a[i] + b[i];
                forced = (forced == -1 ? x_i : forced);
                if (forced != x_i)
                {
                    forced = LLONG_MAX;
                    break;
                }
            }
        }

        if (forced == LLONG_MAX)
        {
            cout << "0\n";
            continue;
        }

        if (forced != -1)
        {
            ll x = forced;
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                ll bi = x - a[i];
                if (bi < 0 || bi > k)
                {
                    flag = false;
                    break;
                }
            }
            cout << (flag ? 1 : 0) << "\n";
        }
        else
        {
            ll L = 0, R = LLONG_MAX;
            for (int i = 0; i < n; i++)
            {
                L = max(L, a[i]);
                ll up = a[i] + k;
                R = min(R, up);
            }
            ll ans = (R >= L ? (R - L + 1) : 0);
            cout << ans << "\n";
        }
    }

    return 0;
}
