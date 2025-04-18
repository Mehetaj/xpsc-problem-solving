#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll x;
        if (c == 0)
        {
            if (a == b)
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
            continue;
        }
        else
        {
            ll aa = max(a, b);
            ll bb = min(a, b);
            c++;
            x = bb * c;
            if (x >= aa)
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
    }
    return 0;
}

