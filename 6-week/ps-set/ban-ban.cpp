#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int p = (n + 1) / 2;
        cout << p << '\n';

        for (int i = 1; i <= p; ++i)
        {
            cout << 3 * i - 2 << " " << 3 * n - 3 * (i - 1) << '\n';
        }
    }

    return 0;
}