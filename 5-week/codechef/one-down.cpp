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
        string s, target;
        cin >> n;
        cin >> s;
        cin >> target;

        int oneS = 0, oneT = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                oneS++;
            if (target[i] == '1')
                oneT++;
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (target[i] == '1' && s[i] == '0')
            {
                flag = false;
                break;
            }
        }

        if (oneS < oneT)
            flag = false;
        if ((oneS - oneT) % 2 != 0)
            flag = false;

        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}
