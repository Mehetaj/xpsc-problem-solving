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
        vector<int> a(n + 2), b(n + 2);
        long long sA = 0, sB = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sA += a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
            sB += b[i];
        }

        bool flag = true;

        if (a[1] != b[1] || a[n] != b[n])
        {
            flag = false;
        }

        if (flag && sB > 0 && sA == 0)
        {
            flag = false;
        }

        if (flag)
        {
            for (int i = 2; i <= n - 1; i++)
            {
                if (b[i] == 0 && a[i] == 1)
                {
                    if (!(a[i - 1] == 0 && a[i + 1] == 0))
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }

        if (flag)
        {
            int i = 1;
            while (i <= n)
            {
                if (b[i] == 1)
                {
                    int l = i;
                    while (i + 1 <= n && b[i + 1] == 1)
                    {
                        i++;
                    }
                    int r = i;
                    bool seed = false;
                    for (int j = l; j <= r; j++)
                    {
                        if (a[j] == 1)
                        {
                            seed = true;
                            break;
                        }
                    }
                    if (!seed)
                    {
                        flag = false;
                        break;
                    }
                }
                i++;
            }
        }

        cout << (flag ? "Yes\n" : "No\n");
    }

    return 0;
}