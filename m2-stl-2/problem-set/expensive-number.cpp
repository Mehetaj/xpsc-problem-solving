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
        string s;
        cin >> s;
        int n = s.size();
        bool flag = false;
        int cnt = 0;

        for (auto i = n - 1; i >= 0; --i)
        {
            if (s[i] != '0')
            {
                flag = true;
            }
            else if (flag)
            {
                cnt++;
            }
        }

        cout << n - (cnt + 1) << '\n';
    }
    return 0;
}