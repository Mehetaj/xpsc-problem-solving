#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> teach(m);
        for (int i = 0; i < m; i++)
            cin >> teach[i];

        sort(teach.begin(), teach.end());

        while (q--)
        {
            int dav;
            cin >> dav;

            if (dav < teach[0])
            {
                cout << teach[0] - 1 << '\n';
                continue;
            }

            if (dav > teach[m - 1])
            {
                cout << n - teach[m - 1] << '\n';
                continue;
            }

            auto it = lower_bound(teach.begin(), teach.end(), dav);
            auto jt = it;
            jt--;

            int left = *jt, right = *it;
            int mid = (right + left) / 2;
            cout << min(abs(mid - left), abs(mid - right)) << '\n';
        }
    }
    return 0;
}