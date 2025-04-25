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
        string s;
        cin >> n >> s;

        int cnt = 0;
        for (char c : s)
        {
            if (c == '1')
                cnt++;
        }

        int ans = (n - cnt) + cnt * (n - 1);

        cout << ans << '\n';
    }
    return 0;
}