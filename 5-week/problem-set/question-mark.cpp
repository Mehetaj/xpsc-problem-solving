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
        ll a(0), b(0), c(0), d(0);
        for (ll i = 0; i < s.size(); i++)
        {
            a += (s[i] == 'A');
            b += (s[i] == 'B');
            c += (s[i] == 'C');
            d += (s[i] == 'D');
        }

        ll cnt = (a < n ? a : n) + (b < n ? b : n) + (c < n ? c : n) + (d < n ? d : n);
        cout << cnt << '\n';
    }

    return 0;
}