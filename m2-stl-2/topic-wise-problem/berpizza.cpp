#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<int> vis(n + 1, 0);
    priority_queue<pair<int, int>> pq;
    queue<int> q;
    int t = 1;
    int c = n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int y;
            cin >> y;
            pq.push({y, c - t});
            q.push(t);
            t++;
        }
        else if (x == 2)
        {
            while (vis[q.front()])
                q.pop();
            vis[q.front()] = 1;
            cout << q.front() << " ";
            q.pop();
        }
        else
        {
            while (!pq.empty() && vis[c - pq.top().second])
                pq.pop();
            if (!pq.empty())
            {
                vis[c - pq.top().second] = 1;
                cout << c - pq.top().second << " ";
                pq.pop();
            }
        }
    }
}