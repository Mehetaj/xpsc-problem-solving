#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int k = 0;
        int count0 = 0, count1 = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') ++count0;
            else ++count1;
            
            if (count0 == count1) {
                ++k;
            }
        }
        
        if (k == 0) {
            cout << 1 << '\n';
        } else {
            cout << (1LL << k) << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}