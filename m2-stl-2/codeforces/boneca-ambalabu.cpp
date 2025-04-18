#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }

        int count[30] = {0};
        for (int i = 0; i < n; ++i) {
            for (int b = 0; b < 30; ++b) {
                if (a[i] & (1 << b)) {
                    count[b]++;
                }
            }
        }

        long long res = 0;

        for (int i = 0; i < n; ++i) {
            long long sum = 0;
            for (int b = 0; b < 30; ++b) {
                if (a[i] & (1 << b)) {
                    sum += static_cast<long long>(n - count[b]) << b;
                } else {
                    sum += static_cast<long long>(count[b]) << b;
                }
            }
            res = max(res, sum);
        }

        cout << res << '\n';
    }

    return 0;
}
