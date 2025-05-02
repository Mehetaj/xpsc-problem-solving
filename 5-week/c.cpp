#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p, v, t, ans = 0;
    cin >> n;
    while (n--)
    {
        cin >> p >> v >> t;
        if (p + v + t >= 2)
        {
            ans += 1;
        }
    }
    cout << ans << '\n';
    return 0;
}