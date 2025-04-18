#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string p, s;
        cin >> p >> s;

        int i = 0, j = 0;
        int n = p.size(), m = s.size();
        bool flag = true;

        while (i < n && j < m) {
            if (p[i] != s[j]) {
                flag = false;
                break;
            }

            int cnt = 0;
            char ch = s[j];
            while (j < m && s[j] == ch && cnt < 2) {
                j++;
                cnt++;
            }

            i++; 
        }

        if (i != n || j != m) flag = false;

        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}
