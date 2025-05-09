#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, f;
    cin >> n >> f;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == f)
        {
            flag = true;
            break;
        }
        else
        {
            flag = false;
            continue;
            ;
        }
    }

    if (flag)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

    return 0;
}