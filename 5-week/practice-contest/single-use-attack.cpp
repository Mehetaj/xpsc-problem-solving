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
        int h, x, y;
        cin >> h >> x >> y;

        int nAtt = (h + x - 1) / x;

        int hlth = h - y;
        int spAtk = (hlth > 0) ? (hlth + x - 1) / x : 0;
        int total = 1 + spAtk;

        cout << min(atk, total) << '\n';
    }

    return 0;
}
