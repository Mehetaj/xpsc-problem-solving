#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int solve_case(int n, int m, int d, vector<string> &mountain)
{
    vector<vector<int>> dp(n, vector<int>(m, 0));

    for (int j = 0; j < m; ++j)
    {
        if (mountain[0][j] == 'X')
        {
            dp[0][j] = 1;
        }
    }

    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (mountain[i][j] == 'X')
            {
                for (int k = 0; k < m; ++k)
                {
                    if (mountain[i - 1][k] == 'X')
                    {
                        int di = (i) - (i - 1);
                        int dj = j - k;
                        int dist_sq = di * di + dj * dj;
                        if (dist_sq <= d * d)
                        {
                            dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
                        }
                    }
                }
            }
        }
    }

    int result = 0;
    for (int j = 0; j < m; ++j)
    {
        if (mountain[n - 1][j] == 'X')
        {
            result = (result + dp[n - 1][j]) % MOD;
        }
    }

    return result;
}

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, d;
        cin >> n >> m >> d;

        vector<string> mountain(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> mountain[i];
        }

        cout << solve_case(n, m, d, mountain) << '\n';
    }
}

int main()
{
    solve();
    return 0;
}