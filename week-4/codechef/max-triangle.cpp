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
        if (n > 3)
            cout << (3 * n - 3) << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}