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
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll gdc = a[0];
        for (int i = 1; i < n; i++)
        {
            gdc = gcd(gdc, a[i]);
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != gdc)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "No" << '\n';
        }
        else
        {
            cout << "Yes" << '\n';
            bool used = false;
            for (int i = 0; i < n; i++)
            {
                if (!used && a[i] != gdc)
                {
                    cout << "1 ";
                    used = true;
                }
                else
                {
                    cout << "2 ";
                }
            }
            cout << '\n';
        }
    }
    return 0;
}
