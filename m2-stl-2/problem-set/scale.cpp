#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        vector<string> v(n);
        for (long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<string> w(n / k, string(n / k, '0'));
        for (long i = 0; i < n; i += k)
        {
            for (long j = 0; j < n; j += k)
            {
                w[i / k][j / k] = v[i][j];
            }
        }

        for (long i = 0; i < w.size(); i++)
        {
            cout << w[i] << '\n';
        }
    }
}