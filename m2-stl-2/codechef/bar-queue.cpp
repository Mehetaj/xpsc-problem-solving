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
        string s;
        cin >> s;

        int b = 0, g = 0;
        int ans = n;   

        for (int i = 0; i < n; ++i) {
            if (s[i] == 'B') {
                b++;
            } else if (s[i] == 'G') {
                g++;
            }

            if (g == 0 && b > 0) {
                ans = i + 1; 
                break;
            }
            if (b > 2 * g) {
                ans = i + 1;
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
