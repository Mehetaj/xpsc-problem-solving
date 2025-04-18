#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ----------------------------------------
    // two dimentional vector

    // int n, m;
    // cin >> n;

    // vector<vector<int>> v;

    // for (int i = 0; i < n; i++)
    // {
    //     int m;
    //     cin >> m;
    //     vector<int> a;
    //     for (int j = 0; j < m; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         a.push_back(x);
    //     }
    //     for (auto val : a)
    //     {
    //         cout << val << " ";
    //     }
    //     cout << '\n';
    // }

    int n;
    cin >> n;
    vector<string> v;

    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    return 0;
}