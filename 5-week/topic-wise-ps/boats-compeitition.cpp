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
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        sort(a.begin(), a.end());

        int ans = 0;

        for (int s = 2; s <= 2 * a.back(); ++s)
        {
            int l = 0, r = n - 1, pairs = 0;
            vector<bool> flag(n, false);

            while (l < r)
            {
                if (flag[l])
                {
                    ++l;
                    continue;
                }
                if (flag[r])
                {
                    --r;
                    continue;
                }

                int sum = a[l] + a[r];
                if (sum == s)
                {
                    flag[l] = flag[r] = true;
                    pairs++;
                    l++;
                    r--;
                }
                else if (sum < s)
                    l++;
                else
                    r--;
            }

            ans = max(ans, pairs);
        }

        cout << ans << '\n';
    }

    return 0;
}
