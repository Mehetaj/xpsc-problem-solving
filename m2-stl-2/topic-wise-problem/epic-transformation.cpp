#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t(1);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> m;
        int mx = 0;
        for (int i = 0, k; i < n; ++i)
        {
            cin >> k;
            ++m[k];
            mx = max(mx, m[k]);
        }
        if (mx <= n / 2)
            cout << n % 2 << '\n';
        else
            cout << 2 * mx - n << '\n';
    }
    return 0;
}