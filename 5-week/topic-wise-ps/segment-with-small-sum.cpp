#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, s;
    ll l = 0, r = 0;
    cin >> n >> s;

    vector<ll> a(n);
    ll sum = 0, ans = 0;
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    while (r < n)
    {
        sum += a[r];

        if (sum <= s)
        {
            ans = max(ans, r - l + 1);
        }
        else
        {
            sum -= a[l];
            l++;
        }
        r++;
    }

    cout << ans << '\n';

    return 0;
}