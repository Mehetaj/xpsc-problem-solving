#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int cnt = 0;
        if (s[i] == '0')
        {
            while (s[i] == '0' && i < s.size())
            {
                cnt++;
                i++;
            }
        }
        else
        {
            while (s[i] == '1' && i < s.size())
            {
                cnt++;
                i++;
            }
        }
        if (cnt >= 7)
            ans = 1;
        i--;
    }
    if (ans == 1)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
    return 0;
}

