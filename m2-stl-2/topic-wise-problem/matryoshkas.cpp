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

        vector<long> v(n);
        for (long i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        v.push_back(1e9 + 3);

        long prev = v[0], cur = 1, cnt = 0, tmp = 0;

        for (long i = 1; i <= n; ++i)
        {
            if (v[i] == prev)
            {
                ++cur;
            }
            else
            {
                if (cur < tmp)
                {
                    cnt += (tmp - cur);
                    tmp = cur;
                }
                else
                {
                    tmp = cur;
                }

                if (v[i] > prev + 1)
                {
                    cnt += tmp;
                    tmp = 0;
                }
                cur = 1;
            }

            prev = v[i];
        }

        cout << cnt << '\n';
    }

    return 0;
}
