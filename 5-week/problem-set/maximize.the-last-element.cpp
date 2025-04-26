#include <bits/stdc++.h>
using namespace std;


const int mx = 105;
int t, n, a[mx];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int val = 0;
        for (int i = 1; i <= n; i += 2)
            val = max(val, a[i]);
        cout << val << '\n';
    }
}