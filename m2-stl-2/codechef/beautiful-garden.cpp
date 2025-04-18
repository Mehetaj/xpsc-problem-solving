#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll beafiful_garden(ll n, ll k, ll d, vector<ll>& t)
{
    if (k >= n) return 0; 

    priority_queue<ll, vector<ll>, greater<ll>> grow;

    for (ll i = 0; i < n; ++i) {
        grow.push(0);
    }

    sort(t.begin(), t.end()); 
    
    ll cnt = 0;
    ll idx = 0;

    for (ll day = 1; day <= d; day++) {
        while (!grow.empty() && grow.top() <= day) {
            grow.pop();
        }

        ll blum = n - grow.size();

        ll pluck = blum - k;
        if (pluck > 0) {
            cnt += pluck;

            for (ll i = 0; i < pluck; i++) {
                grow.push(day + t[idx]);
                idx = (idx + 1) % n;
            }
        }
    }

    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        ll n, k, d;
        cin >> n >> k >> d;

        vector<ll> t(n);
        for (ll i = 0; i < n; i++) {
            cin >> t[i];
        }

        cout << beafiful_garden(n, k, d, t) << endl;
    }

    return 0;
}
