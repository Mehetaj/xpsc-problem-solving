#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        map<ll, int> fr;
        for (auto x : a) fr[x]++;

        bool flag = false;
        
        for (auto &[day, cnt] : fr)
        {
            if (cnt >= 4) {
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            for (auto &[day, cnt] : fr)
            {
                if (fr[day] >= 2 && fr[day + 1] >= 2)
                {
                    flag = true;
                    break;
                }
            }
        }

        if (!flag)
        {
            for (auto &[day, cnt] : fr)
            {
                if (fr[day] >= 2 && fr[day + 1] >= 1 && fr[day + 2] >= 2)
                {
                    flag = true;
                    break;
                }
            }
        }

        cout << (flag ? "Yes" : "No") << '\n';
    }
    return 0;
}
