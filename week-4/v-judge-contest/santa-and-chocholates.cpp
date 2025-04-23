#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);



    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int mini = 1e9, maxi = -1e9;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mini = min(mini, a[i]);
            maxi = max(maxi, a[i]);
        }

        if (maxi - mini <= 2 * k) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
