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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int &x : a)
            cin >> x;
        for (int &x : b)
            cin >> x;

        vector<int> pref(m + 1, n), suff(m + 1, -1);
        pref[0] = -1;
        int j = 0;
        for (int i = 0; i < n && j < m; ++i)
        {
            if (a[i] >= b[j])
            {
                pref[j + 1] = i;
                ++j;
            }
        }

        j = m - 1;
        suff[m] = n;
        for (int i = n - 1; i >= 0 && j >= 0; --i)
        {
            if (a[i] >= b[j])
            {
                suff[j] = i;
                --j;
            }
        }

        if (pref[m] < n)
        {
            cout << "0\n";
            continue;
        }

        int res = INT_MAX;
        for (int i = 1; i <= m; ++i)
        {
            if (pref[i - 1] < suff[i])
            {
                res = min(res, b[i - 1]);
            }
        }

        cout << (res == INT_MAX ? -1 : res) << '\n';
    }

    return 0;
}