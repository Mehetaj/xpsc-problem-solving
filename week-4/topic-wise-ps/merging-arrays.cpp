#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m);
    multiset<ll> ms;

    while (n--)
    {
        ll x;
        cin >> x;
        ms.insert(x);
    }

    while (m--)
    {
        ll x;
        cin >> x;
        ms.insert(x);
    }

    for (ll x : ms)
        cout << x << " ";

    return 0;
}