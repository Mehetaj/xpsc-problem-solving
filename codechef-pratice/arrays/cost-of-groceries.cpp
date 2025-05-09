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
        int n, x;
        cin >> n >> x;
        int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }

        int total = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= x)
            {
                total += b[i];
            }
        }

        cout << total << '\n';
    }

    return 0;
}
