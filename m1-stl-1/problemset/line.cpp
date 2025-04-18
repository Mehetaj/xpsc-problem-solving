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
        string s;
        cin >> s;
        
        vector<ll> diff(n, 0);
        ll sum = 0;
        
        for (ll p = 0; p < n; p++)
        {
            ll curr = (s[p] == 'L') ? p : n - p - 1;
            ll mx = max(p, n - p - 1);
            sum += curr;
            diff[p] = mx - curr;
        }

        sort(diff.rbegin(), diff.rend());

        for (ll p = 0; p < n; p++)
        {
            sum += diff[p];
            cout << sum << " ";
        }
        cout << '\n';
    }
}
