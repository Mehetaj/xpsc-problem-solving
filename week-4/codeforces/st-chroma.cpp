#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);

        if (x == 0)
        {
            for (int i = 1; i < n; i++)
                v[i - 1] = i;
            v[n - 1] = 0;
        }
        else if (x == n)
        {
            for (int i = 0; i < n; i++)
                v[i] = i;
        }
        else
        {
            int i = 0;
            for (; i < x; i++)
                v[i] = i;
            for (int j = x + 1; j < n; j++, i++)
                v[i] = j;
            v[i] = x;
        }

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << (i + 1 == n ? '\n' : ' ');
        }
    }
}