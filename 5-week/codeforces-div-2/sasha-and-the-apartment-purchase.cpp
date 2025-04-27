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
        for (int &x : a) cin >> x;
        sort(a.begin(), a.end());
        int m = n - k;
        vector<pair<int, int>> merg;

        for (int i = 0; i <= n - m; ++i) {
            int L, R;
            if (m % 2 == 0) {
                int mid1 = i + (m / 2 - 1);
                int mid2 = i + (m / 2);
                L = a[mid1];
                R = a[mid2];
            } else {
                int mid = i + (m / 2);
                L = R = a[mid];
            }

            if (merg.empty()) {
                merg.emplace_back(L, R);
            } else {
                auto &it = merg.back();
                if (L <= it.second) {
                    it.second = max(it.second, R);
                } else {
                    merg.emplace_back(L, R);
                }
            }
        }

        long long int res = 0;
        for (auto &it : merg) {
            res += it.second - it.first + 1;
        }
        cout << res << '\n';
    }
}