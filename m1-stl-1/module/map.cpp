#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;
    mp[10] = 20;
    mp[2] = 12;

    // cout << mp[10] << '\n';
    // cout << mp[2] << '\n';

    for (auto it : mp)
    {
        int key = it.first;
        cout << key << " ";
    }

    return 0;
}