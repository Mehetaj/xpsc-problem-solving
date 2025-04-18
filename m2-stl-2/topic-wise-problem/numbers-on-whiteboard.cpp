#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t, n;
    cin >> t;
    while (t--)
    {
        priority_queue<ll> q;
        cin >> n;
        for (ll i = n; i >= 1; i--)
        {
            q.push(i);
        }
        ll a, b, c;
        cout << 2 << endl;
        while (q.size() > 1)
        {
            a = q.top();
            q.pop();
            b = q.top();
            q.pop();
            cout << a << " " << b << endl;
            c = a + b;
            if (c & 1)
                c++;
            c /= 2;
            q.push(c);
        }
    }

    return 0;
}
