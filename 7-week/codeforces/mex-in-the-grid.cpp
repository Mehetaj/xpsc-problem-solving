#include <bits/stdc++.h>
using namespace std;

void genGrid(int n)
{
    vector<vector<int>> grid(n, vector<int>(n, 0));

    int t = 0, b = n - 1;
    int l = 0, r = n - 1;
    int add = 0;

    while (t <= b && l <= r)
    {
        for (int i = l; i <= r; ++i)
            grid[t][i] = add++;
        ++t;

        for (int i = t; i <= b; ++i)
            grid[i][r] = add++;
        --r;

        if (t <= b)
        {
            for (int i = r; i >= l; --i)
                grid[b][i] = add++;
            --b;
        }

        if (l <= r)
        {
            for (int i = b; i >= t; --i)
                grid[i][l] = add++;
            ++l;
        }
    }

    int mxV = n * n - 1;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            grid[i][j] = mxV - grid[i][j];

    for (auto &row : grid)
    {
        for (int val : row)
            cout << val << ' ';
        cout << '\n';
    }
}

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
        genGrid(n);
    }
    return 0;
}
