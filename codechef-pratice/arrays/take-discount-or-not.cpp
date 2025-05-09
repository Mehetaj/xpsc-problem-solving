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
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];

        int cost = 0;
        int discount = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            cost += a[i];
            discount += max(0, a[i] - y);
        }

        int total = x + discount;

        if (total < cost)
            cout << "COUPON" << '\n';
        else
            cout << "NO COUPON" << '\n';
    }

    return 0;
}
