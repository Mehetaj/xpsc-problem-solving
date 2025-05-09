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
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mnV = *min_element(a, a + n);
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] > mnV) {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
