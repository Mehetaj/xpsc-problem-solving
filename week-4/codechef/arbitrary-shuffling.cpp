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
        vector<int> p(n);
        int pnts = 0;

        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            if (p[i] == i + 1) {
                pnts++;
            }
        }

        if (pnts == 0) {
            cout << 0 << '\n';
        } else if (pnts == n) {
            cout << 1 << '\n';
        } else {
            cout << 1 << '\n';
        }
    }

    return 0;
}
