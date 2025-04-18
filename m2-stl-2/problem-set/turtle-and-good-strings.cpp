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
        string s(n, '\0');
        cin >> s;

        if (s.front() == s.back())
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }

    return 0;
}