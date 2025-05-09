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

        vector<int> a(n);
        int red = 0, blue = 0, zero = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                red++;
            else if (a[i] == 2)
                blue++;
            else
                zero++;
        }

        if (n % 2 != 0)
        {
            cout << "No" << '\n';
            continue;
        }

        int hlf = n / 2;
        int red_need = max(0, hlf - red);
        int blue_need = max(0, hlf - blue);

        if (red_need + blue_need <= zero)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }

    return 0;
}
