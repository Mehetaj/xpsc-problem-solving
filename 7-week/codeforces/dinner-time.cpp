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
        ll n, m, p, q;
        cin >> n >> m >> p >> q;

        ll cnt = n / p;
        ll rem = n % p;

        if (rem == 0)
        {
            cout << (m == cnt * q ? "YES" : "NO") << '\n';
        }
        else
        {
            cout << "YES" << '\n';
        }
    }
    return 0;
}
