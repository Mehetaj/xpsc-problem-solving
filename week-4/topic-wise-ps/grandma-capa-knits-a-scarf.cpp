#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n >> s;
        int res = n + 1;
        for (int c = 0; c < 26; ++c)
        {
            int l = 0, r = n - 1, count = 0;
            while (l <= r)
            {
                if (s[l] == s[r])
                {
                    l++, r--;
                }
                else if (s[l] == char('a' + c))
                {
                    count++, l++;
                }
                else if (s[r] == char('a' + c))
                {
                    count++, r--;
                }
                else
                {
                    count = n + 1;
                    break;
                }
            }
            res = min(res, count);
        }
        if (res == n + 1)
            res = -1;
        cout << res << '\n';
    }
    return 0;
}
