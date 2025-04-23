#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll find_r(ll N, ll z)
{
    if (z == 0)
        return 1;
    ll curr = 1, hi = N;
    while (curr < hi)
    {
        ll mid = curr + (hi - curr) / 2;
        ll e = mid * (mid - 1) / 2;
        if (e >= z)
        {
            hi = mid;
        }
        else
        {
            curr = mid + 1;
        }
    }
    return curr;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        ll e = n * (n - 1) / 2;

        ll z = e - m;

        ll a = (n - 1) * (n - 2) / 2;

        ll wmn = m - a;
        if (wmn < 0)
            wmn = 0;

        ll r = find_r(n, z);

        ll wmx = n - r;

        if (wmx < wmn)
        {
            cout << "0" << '\n';
        }
        else
        {
            ll cnt = wmx - wmn + 1;
            ll s = (wmn + wmx) * cnt / 2;
            cout << s  << '\n';
        }
    }
    return 0;
}
