#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<string> ans;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        vector<int> b(m);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; ++i)
        {
            cin >> b[i];
        }

        int mxB = 0;
        for (int i = 0; i < m; ++i)
        {
            mxB = max(mxB, b[i]);
        }

        sort(a.begin() + (n - mxB), a.end());

        string res = "";
        for (int i = 0; i < n; ++i)
        {
            res += to_string(a[i]) + " ";
        }
        ans.push_back(res);
    }

    cout << "\n";
    for (string &res : ans)
    {
        cout << res << "\n";
    }

    return 0;
}
