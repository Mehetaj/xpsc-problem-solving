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
        cin >> n;
        string s;
        cin >> s;

        char pv = '1';
        vector<int> v;
        for (char c : s)
        {
            if (c == '1')
                v.push_back(1);
            if (c == '0' && pv == '1')
                v.push_back(0);
            pv = c;
        }

        int one = 0, zero = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == 1)
                one++;
            else
                zero++;
        }

        if (one > zero)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}