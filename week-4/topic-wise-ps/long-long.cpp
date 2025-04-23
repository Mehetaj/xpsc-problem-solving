#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;

        bool flag = true;
        long cnt = 0;
        long long total = 0;

        for (long i = 0; i < n; i++)
        {
            long x;
            cin >> x;

            if (x > 0)
            {
                flag = true;
                total += x;
            }
            else if (x < 0)
            {
                if (flag)
                {
                    ++cnt;
                    flag = false;
                }
                total -= x;
            }
        }

        cout << total << " " << cnt << endl;
    }

    return 0;
}
