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
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> a(n), b(m);
        for (int &x : a)
            cin >> x;
        for (int &x : b)
            cin >> x;

        int i = 0, j = 0;
        vector<int> ans;
        bool ok = true;

        while (i < n || j < m)
        {
            bool flag = false;

            if (i < n && a[i] == 0)
            {
                ans.push_back(0);
                ++k;
                ++i;
                flag = true;
            }
            else if (j < m && b[j] == 0)
            {
                ans.push_back(0);
                ++k;
                ++j;
                flag = true;
            }
            else if (i < n && a[i] <= k)
            {
                ans.push_back(a[i++]);
                flag = true;
            }
            else if (j < m && b[j] <= k)
            {
                ans.push_back(b[j++]);
                flag = true;
            }

            if (!flag)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            for (int x : ans)
                cout << x << ' ';
            cout << '\n';
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}
