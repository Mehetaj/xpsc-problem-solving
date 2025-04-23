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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int minw = -1;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] >= k)
            {
                int waste = a[i] % k;
                if (minw == -1 || waste < minw)
                {
                    minw = waste;
                }
            }
        }

        cout << minw << endl;
    }

    return 0;
}
