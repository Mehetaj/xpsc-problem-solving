#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n;
    // cin >> n;
    // vector<int> v;

    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << "\n";

    // int n;
    // cin >> n;
    // vector<int> v(n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << "\n";

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    for (auto val : dq)
    {
        cout << val << " ";
    }

    cout << "\n";

    dq.pop_front();

    for (auto val : dq)
    {
        cout << val << " ";
    }
    cout << "\n";

    return 0;
}