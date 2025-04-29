#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int mn = INT_MAX;
    ll sum = 0;
    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        sum += a[i];

        while (sum >= s)
        {
            mn = min(mn, i - ans + 1);
            sum -= a[ans++];
        }
    }

    if (mn == INT_MAX)
        cout << -1 << '\n';
    else
        cout << mn << '\n';

    return 0;
}