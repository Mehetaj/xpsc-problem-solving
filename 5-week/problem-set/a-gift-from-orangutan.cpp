#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 998244353, mod1 = 1e9 + 7;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, n, x1 = 0, k, m, l1 = 0, l2 = 0, x = 0;
    cin >> a;
    while (a--)
    {
        cin >> n;
        vector<int> t(n + 5);
        for (int i = 1; i <= n; i++)
        {
            cin >> t[i];
        }
        sort(t.begin() + 1, t.begin() + n + 1);
        int max1 = t[n], min1 = t[n];
        x1 = 0;
        for (int i = 1; i < n; i++)
        {
            min1 = min(min1, t[i]);
            x1 += max1 - min1;
        }
        cout << x1 << "\n";
    }
    return 0;
}