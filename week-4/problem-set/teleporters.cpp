#include <bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, c, res = 0;
        cin >> n >> c;
        priority_queue<int> pq;
        for (int i = 1, x; i <= n; ++i)
        {
            cin >> x;
            pq.push(-x - i);
        }
        while (!pq.empty())
        {
            int x = -pq.top();
            pq.pop();
            if (x > c)
                break;
            ++res;
            c -= x;
        }
        cout << res << "\n";
    }
}