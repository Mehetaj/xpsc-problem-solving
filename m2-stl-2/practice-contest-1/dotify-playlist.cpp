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
        int n, k, l;
        cin >> n >> k >> l;

        vector<int> match;

        for (int i = 0; i < n; ++i)
        {
            int m, lan;
            cin >> m >> lan;
            if (lan == l)
            {
                match.push_back(m);
            }
        }

        if (match.size() < k)
        {
            cout << -1 << '\n';
        }
        else
        {
            sort(match.begin(), match.end(), greater<int>());
            int total = 0;
            for (int i = 0; i < k; ++i)
            {
                total += match[i];
            }
            cout << total << '\n';
        }
    }

    return 0;
}
