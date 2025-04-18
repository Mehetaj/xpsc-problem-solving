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

        vector<vector<int>> move(n, vector<int>(n));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> move[i][j];
            }
        }

        vector<int> v(2 * n + 1, 0);

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                int s = i + j + 2;
                if (v[s] == 0)
                {
                    v[s] = move[i][j];
                }
            }
        }

        vector<int> find(2 * n + 1, 0);
        for (int s = 2; s <= 2 * n; ++s)
        {
            find[v[s]] = 1;
        }

        for (int num = 1; num <= 2 * n; ++num)
        {
            if (!find[num])
            {
                v[1] = num;
                break;
            }
        }

        for (int i = 1; i <= 2 * n; ++i)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
