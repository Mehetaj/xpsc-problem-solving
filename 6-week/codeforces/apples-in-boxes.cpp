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
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> a(n);
        ll sum = 0;
        ll M = LLONG_MIN;
        ll m = LLONG_MAX;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] > M)
            {
                M = a[i];
                cnt = 1;
            }
            else if (a[i] == M)
            {
                cnt++;
            }
            if (a[i] < m)
                m = a[i];
        }

        ll reduce = M - m;

        if (reduce <= k || (reduce == k + 1 && cnt == 1))
        {
            if (sum % 2 == 1)
            {
                cout << "Tom" << '\n';
            }
            else
            {
                cout << "Jerry" << '\n';
            }
        }
        else
        {
            cout << "Jerry" << '\n';
        }
    }
    return 0;
}