#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<ll> s(k);
        for (int i = 0; i < k; ++i) {
            cin >> s[i];
        }

        if (k == 1) {
            cout << "YES" << '\n';
            continue;
        }

        vector<ll> diffs(k - 1);
        for (int i = 1; i < k; ++i) {
            diffs[i - 1] = s[i] - s[i - 1];
        }

        if (!is_sorted(diffs.begin(), diffs.end())) {
            cout << "NO" << '\n';
            continue;
        }

        ll mxval = diffs[0];
        ll requir = s[0];
        ll mxsum = mxval * (n - k + 1);

        if (requir > mxsum) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
        }
    }

    return 0;
}
