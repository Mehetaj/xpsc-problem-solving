#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll ng = -1000000000000000000LL;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll crr = 0, knownM = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                crr = max(crr + a[i], a[i]);
                knownM = max(knownM, crr);
                if (crr < 0)
                    crr = 0;
            }
            else
            {
                crr = 0;
            }
        }

        if (knownM > k)
        {
            cout << "No" << '\n';
            continue;
        }
        int posZ = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                posZ = i;
                break;
            }
        }
        if (posZ == -1)
        {
            if (knownM == k)
            {
                cout << "Yes" << '\n';
                for (ll v : a)
                    cout << v << ' ';
                cout << "" << '\n';
            }
            else
            {
                cout << "No" << '\n';
            }
            continue;
        }
        int j = posZ;
        ll sSum = 0, Lmax = LLONG_MIN;
        bool foundL = false;
        for (int i = j - 1; i >= 0 && s[i] == '1'; i--)
        {
            sSum += a[i];
            Lmax = max(Lmax, sSum);
            foundL = true;
        }
        ll L = foundL ? Lmax : 0;
        ll pSum = 0, Rmax = LLONG_MIN;
        bool findR = false;
        for (int i = j + 1; i < n && s[i] == '1'; i++)
        {
            pSum += a[i];
            Rmax = max(Rmax, pSum);
            findR = true;
        }
        ll R = findR ? Rmax : 0;
        ll x;
        if (L >= 0 && R >= 0)
        {
            x = k - L - R;
        }
        else if (L >= 0 && R <= 0)
        {
            x = k - L;
        }
        else if (L <= 0 && R >= 0)
        {
            x = k - R;
        }
        else
        {
            x = k;
        }
        cout << "Yes" << '\n';
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (i == j)
                    cout << x;
                else
                    cout << ng;
            }
            else
            {
                cout << a[i];
            }
            cout << (i + 1 < n ? ' ' : '\n');
        }
    }
    return 0;
}