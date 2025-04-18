#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);

        map<ll, pair<ll, ll>> v;

        for (ll i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (v[a[i]].first == 0)
            {
                v[a[i]].first = i + 1;
            }
            v[a[i]].second = i + 1;
        }

        while (k--)
        {
            int x, y;
            cin >> x >> y;

            if (v[x].first > 0 && v[y].first > 0 && v[x].first < v[y].second)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
    }

    return 0;
}
