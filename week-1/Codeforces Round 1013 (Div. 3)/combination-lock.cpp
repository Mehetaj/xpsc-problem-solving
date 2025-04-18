#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "1\n";
        return;
    }
    if (n == 3) {
        cout << "1 3 2\n";
        return;
    }
    if (n == 5) {
        cout << "4 1 3 5 2\n";
        return;
    }
    if (n % 2 == 0) {
        cout << "-1\n";
        return;
    }
    vector<int> permutation(n);
    permutation[0] = n;
    int left = 1, right = n - 1;
    for (int i = 1; i < n; ++i) {
        if (i % 2 == 1) {
            permutation[i] = left;
            left++;
        } else {
            permutation[i] = right;
            right--;
        }
    }
    for (int num : permutation) {
        cout << num << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}