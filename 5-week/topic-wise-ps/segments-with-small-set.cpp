#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 1e5 + 5;

int frq[MAXN];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
        cin >> v[i];

    ll ans = 0;
    int l = 0, num = 0;

    for (int r = 0; r < n; ++r)
    {
        if (frq[v[r]] == 0)
        {
            num++;
        }
        frq[v[r]]++;

        while (num > k)
        {
            frq[v[l]]--;
            if (frq[v[l]] == 0)
            {
                num--;
            }
            l++;
        }

        ans += r - l + 1;
    }

    cout << ans << '\n';

    return 0;
}
