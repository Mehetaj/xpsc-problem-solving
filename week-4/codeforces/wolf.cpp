#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> p(n);
        vector<int> position(n + 1);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            position[p[i]] = i + 1;
        }
 
        while (q--) {
            int l, r, x;
            cin >> l >> r >> x;
            int px = position[x];
            if (px < l || px > r) {
                cout << -1 << '\n';
                continue;
            }
            int low = l, high = r;
            int ml = 0, mg = 0, M = 0, lg = 0, gg = 0;
 
            while (low <= high) {
                int m = (low + high) / 2;
                if (m == px) break;
                if (m < px) {
                    if (p[m - 1] < x) lg++;
                    else ml++, M++;
                    low = m + 1;
                } else {
                    if (p[m - 1] > x) gg++;
                    else mg++, M++;
                    high = m - 1;
                }
            }
 
            int tl = x - 1, tg = n - x;
            int sl = tl - lg, sg = tg - gg;
 
            if (ml > sl || mg > sg) cout << -1 << '\n';
            else cout << M + abs(ml - mg) << '\n';
        }
    }
 
    return 0;
}