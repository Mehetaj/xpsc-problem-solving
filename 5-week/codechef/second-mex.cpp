#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mx = 998244353;

ll cmp(ll a, ll e = mx - 2)
{
    ll r = 1;
    while (e)
    {
        if (e & 1)
            r = (r * a) % mx;
        a = (a * a) % mx;
        e >>= 1;
    }
    return r;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> p2;
    int mxn = 200000 + 5;
    p2.resize(mxn);
    p2[0] = 1;
    for (int i = 1; i < mxn; i++)
    {
        p2[i] = (p2[i - 1] << 1) % mx;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int m = n + 2;
        vector<int> freq(m, 0);
        for (int x : a)
        {
            if (x < m)
                freq[x]++;
        }

        vector<ll> p2_c(m), w(m), invw(m);
        for (int v = 0; v < m; v++)
        {
            p2_c[v] = p2[freq[v]];
            if (freq[v] > 0)
            {
                w[v] = (p2_c[v] + mx - 1) % mx;
                invw[v] = cmp(w[v]);
            }
            else
            {
                w[v] = 0;
                invw[v] = 0;
            }
        }

        vector<ll> P(m + 1, 1), P2(m + 1, 1), S(m + 1, 0), Z(m + 1, 0);
        for (int k = 1; k <= m; k++)
        {
            P[k] = (P[k - 1] * w[k - 1]) % mx;
            P2[k] = (P2[k - 1] * (w[k - 1] ? w[k - 1] : 1)) % mx;
            Z[k] = Z[k - 1] + (freq[k - 1] == 0);
            S[k] = S[k - 1] + (w[k - 1] ? invw[k - 1] : 0);
            if (S[k] >= mx)
                S[k] -= mx;
        }

        vector<ll> Tprod(m + 2, 1);
        for (int i = m - 1; i >= 0; i--)
        {
            Tprod[i] = (Tprod[i + 1] * p2_c[i]) % mx;
        }

        ll ans = 0;

        for (int k = 1; k <= m + 1; k++)
        {

            if (Z[k] >= 2)
                continue;
            ll Ck = 0;
            ll Q = (k + 1 <= m ? Tprod[k + 1] : 1);
            if (Z[k] == 1)
            {

                Ck = (P2[k] * Q) % mx;
            }
            else
            {

                Ck = P[k];
                Ck = (Ck * S[k]) % mx;
                Ck = (Ck * Q) % mx;
            }
            ans = (ans + (ll)k * Ck) % mx;
        }

        ans = (ans + mx - 1) % mx;

        cout << ans << "\n";
    }

    return 0;
}