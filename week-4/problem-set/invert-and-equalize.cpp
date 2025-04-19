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
        int count = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != s[i + 1])
                count++;
        }

        cout << count / 2 << "\n";
    }
}