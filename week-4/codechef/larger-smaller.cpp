#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    while (t--)
    {
        int n;
        cin >> n;
        int mn = 101, mx = 0, x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mn = min(mn, x);
            mx = max(mx, x);
        }
        int res = mx - mn - 1;
        if (res < 0)
            res = 0;
        cout << res << endl;
    }

    return 0;
}
