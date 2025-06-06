#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<pair<string, string>, bool> mp;

    for (int i = 0; i < n; i++)
    {
        string k, v;
        cin >> k >> v;
        mp[{k, v}] = true;
    }

    cout << mp.size() << '\n';

    return 0;
}