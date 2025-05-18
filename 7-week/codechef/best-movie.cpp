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
        int n;
        cin >> n;
        int mn = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a >= 7 && b < mn)
            {
                mn = b;
            }
        }
        if (mn == INT_MAX)
        {
            cout << "-1" << '\n';
        }
        else
        {
            cout << mn << '\n';
        }
    }

    return 0;
}
