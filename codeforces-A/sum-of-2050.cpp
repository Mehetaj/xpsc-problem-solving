#include <bits/stdc++.h>
using namespace std;
#define ll long long


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
        int ans = 0;
        while (n >= 2050)
        {
            ans++;
            ll x = 2050;
            while (x <= n)
                x *= 10;
            x /= 10;
            n = n - x;
        }
        if (n != 0)
            cout << -1 << "\n";
        else
            cout << ans << "\n";
    }
    return 0;
}


