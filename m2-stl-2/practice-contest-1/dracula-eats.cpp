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

        if (n < 2)
        {
            cout << 0 << '\n';
        }
        else
        {
            int cnt = 1 + (n - 2) / 7;
            cout << cnt << '\n';
        }
    }

    return 0;
}
