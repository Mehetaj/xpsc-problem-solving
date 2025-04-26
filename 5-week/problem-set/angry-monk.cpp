#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(k);
        int m = -1;
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
            m = max(m, v[i]);
        }
        cout << 2 * (n - m) - k + 1 << '\n';
    }
}