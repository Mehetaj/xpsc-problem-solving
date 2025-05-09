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
        int n;
        cin >> n;

        vector<vector<int>> a(n, vector<int>(n));
        int low = 1, high = n * n;
        bool useL = true;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                a[i][j] = useL ? low++ : high--;
                useL = !useL;
            }
            if (i % 2)
                reverse(a[i].begin(), a[i].end());
        }

        for (const auto &row : a)
        {
            for (int x : row)
                cout << x << ' ';
            cout << '\n';
        }
    }

    return 0;
}
