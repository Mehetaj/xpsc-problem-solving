#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll maxSum = 0, curr = 0;
        ll minOp = 0, tmp = 0;

        for (ll i = 0; i < n; i++)
        {
            if (a[i] >= 0)
            {
                curr += a[i];
            }
            else
            {
                tmp++;
            }

            if (curr < 0)
            {
                curr = 0;
                tmp = 0;
            }

            if (curr > maxSum)
            {
                maxSum = curr;
                minOp = tmp;
            }
            else if (curr == maxSum)
            {
                minOp = min(minOp, tmp);
            }
        }

        cout << minOp << endl;
    }
    return 0;
}
