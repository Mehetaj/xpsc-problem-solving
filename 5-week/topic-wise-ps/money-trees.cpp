#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n), h(n);
        for (auto &i : v)
            cin >> i;
        for (auto &i : h)
            cin >> i;

        if (n == 1) {
            if (v[0] > k)
                cout << 0 << '\n';
            else
                cout << 1 << '\n';
            continue;
        }

        ll j = 0, sum = 0, ans = 0;
        for (int i = 0; i < n; ++i) {
            if (i > 0 && h[i-1] % h[i] != 0) {
                sum = 0;
                j = i;
            }

            sum += v[i];
            while (sum > k) {
                sum -= v[j];
                j++;
            }

            ans = max(ans, i - j + 1);
        }

        cout << ans << '\n';
    }

    return 0;
}
