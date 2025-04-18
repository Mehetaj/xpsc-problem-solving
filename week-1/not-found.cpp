#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    bool frq[26] = {false};

    for (char ch : str)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            frq[ch - 'a'] = true;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (!frq[i])
        {
            cout << char('a' + i) << '\n';
            return 0;
        }
    }

    cout << "None" << '\n';
    return 0;
}
