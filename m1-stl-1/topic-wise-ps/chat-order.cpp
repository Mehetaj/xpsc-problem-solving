#include <bits/stdc++.h>
using namespace std;

map<string, bool> mp;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;
    long long a[n];
    string s[n + 1];

    for (int i = 0; i < n; i++)
        cin >> s[i];

    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[s[i]] != 1)
        {
            cout << s[i] << '\n';
            mp[s[i]] = 1;
        }
    }

    return 0;
}