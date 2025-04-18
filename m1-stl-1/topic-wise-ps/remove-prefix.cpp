#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int a[n];
        map<int, int> mp;

        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = n - 1; i >= 0; i--)
        {
            if (mp[a[i]] > 0)
            {
                break;
            }
            else
                mp[a[i]]++;
        }

        cout << i + 1 << endl;
    }
    return 0;
}