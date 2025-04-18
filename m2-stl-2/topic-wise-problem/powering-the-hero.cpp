#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll idxf[130][130] = {0}, idxl[130][130] = {0};
        ll inf[130] = {0}, inl[130] = {0};

        for (ll i = 0; i < n; i++)
        {
            char f = a[i][0], l = a[i][1];
            idxf[f][l]++;
            inf[f]++;
            idxl[l][f]++;
            inl[l]++;
        }

        ll cnt = 0;

        for (ll i = 90; i < 120; i++)
        {
            if (inf[i] > 1)
            {
                ll x = inf[i];
                for (ll j = 90; j < 120; j++)
                {
                    if (idxf[i][j] > 0)
                    {
                        ll y = idxf[i][j];
                        cnt += y * (x - y);
                        x -= y;
                    }
                    if (x < 2)
                        break;
                }
            }
        }

        for (ll i = 90; i < 120; i++)
        {
            if (inl[i] > 1)
            {
                ll x = inl[i];
                for (ll j = 90; j < 120; j++)
                {
                    if (idxl[i][j] > 0)
                    {
                        ll y = idxl[i][j];
                        cnt += y * (x - y);
                        x -= y;
                    }
                    if (x < 2)
                        break;
                }
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}
