#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        map<string, int> mp;
        string str[3][n];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> str[i][j];
                mp[str[i][j]]++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (mp[str[i][j]] == 1)
                {
                    count += 3;
                }
                else if (mp[str[i][j]] == 2)
                {
                    count++;
                }
            }
            cout << count << ' ';
        }
        cout << '\n';
    }
}