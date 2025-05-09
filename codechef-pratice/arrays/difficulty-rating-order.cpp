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

        bool drecres = true;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                drecres = false;
                break;
            }
        }

        cout << (drecres ? "Yes" : "No") << '\n';
    }

    return 0;
}
