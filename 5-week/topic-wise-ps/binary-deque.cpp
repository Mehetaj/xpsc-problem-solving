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
        ll n, s;
        cin >> n >> s;

        vector<ll> v(1, -1);
        for (ll i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x)
            {
                v.push_back(i);
            }
        }
        v.push_back(n);

        if (v.size() < s + 2)
        {
            cout << "-1\n";
            continue;
        }

        ll mx_len = 0;
        for (ll i = s; i + 1 < v.size(); i++)
        {
            ll len = (v[i + 1] - 1) - v[i - s];
            mx_len = max(mx_len, len);
        }

        cout << n - mx_len << '\n';
    }

    return 0;
}
