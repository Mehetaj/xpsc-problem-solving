#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll get_max(ll m, ll L)
{
    ll q = m / (L + 1);
    ll rem = m % (L + 1);
    return q * L + min(rem, L);
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;

        ll left = 1, right = m;
        ll ans = m;

        while (left <= right)
        {
            ll mid = (left + right) / 2;
            ll max_per_row = get_max(m, mid);
            ll total = n * max_per_row;

            if (total >= k)
            {
                ans = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        cout << ans << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}