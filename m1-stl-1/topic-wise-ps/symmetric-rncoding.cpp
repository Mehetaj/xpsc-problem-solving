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
        string b;
        cin >> b;

        vector<bool> v(26, 0);
        for (ll i = 0; i < n; i++)
        {
            v[b[i] - 'a'] = 1;
        }
        string a("");
        for (ll i = 0; i < 26; i++)
        {
            if (!v[i])
            {
                continue;
            }
            a += (char)('a' + i);
        }

        map<char, char> mp;
        for (ll p = 0; p < a.size(); p++)
        {
            mp[a[p]] = a[a.size() - 1 - p];
        }
        for (ll p = 0; p < b.size(); p++)
        {
            b[p] = mp[b[p]];
        }
        cout << b << endl;
    }
}