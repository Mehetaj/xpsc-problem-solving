#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> s;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.push_back(str);
    }

    vector<string> reg;

    for (int i = 0; i < n; i++)
    {
        if (reg[i] != s[i])
        {
            reg.push_back(s[i]);
        }
    }

    return 0;
}