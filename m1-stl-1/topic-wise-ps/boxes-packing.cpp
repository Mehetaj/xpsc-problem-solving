#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a;
    map<int, int> mp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        mp[a]++;
    }
    ll res = 0, tmp;
    map<int, int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        tmp = it->second;
        res = max(res, tmp);
    }
    cout << res << '\n';

    return 0;
}