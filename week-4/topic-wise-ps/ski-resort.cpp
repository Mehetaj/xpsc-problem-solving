#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        int t[n];
        int p = 0;
        ll res = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> t[i];
            if (t[i] <= q)
                p++;
            else
                p = 0;
            res += max(0, p - k + 1);
        }
        cout << res << '\n';
    }
    return 0;
}
