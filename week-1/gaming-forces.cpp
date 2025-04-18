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


        int track_one = 0;
        int ans = 0;


        for (int i = 0; i < n; i++)
        {
            int idx;
            cin >> idx;

            if (idx == 1)
                track_one++;
            else
                ans++;
        }
        ans += (track_one / 2) + (track_one % 2);
        cout << ans << "\n";
    }
    return 0;
}