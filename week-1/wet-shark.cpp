#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll s = 0, n;

    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    if (s % 2 == 0)
        cout << s << "\n";

    else
    {
        sort(a, a + n);
        for (ll i = 0; i < n; i++)
        {
            if ((s - a[i]) % 2 == 0)
            {
                cout << s - a[i] << "\n";
                break;
            }
        }
    }

    return 0;
}