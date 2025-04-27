#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        vector<int> a(10, 0);
        for (char ch : s) {
            a[ch - '0']++;
        }

        string res(10, ' ');
        for (int i = 0; i < 10; ++i) {
            int bnd = 9 - i;
            for (int d = bnd; d <= 9; ++d) {
                if (a[d] > 0) {
                    a[d]--;

                    vector<int> rm;
                    for (int x = 0; x <= 9; ++x) {
                        for (int k = 0; k < a[x]; ++k) {
                            rm.push_back(x);
                        }
                    }

                    vector<int> bnd;
                    for (int j = i + 1; j < 10; ++j) {
                        bnd.push_back(9 - j);
                    }

                    sort(rm.begin(), rm.end());
                    sort(bnd.begin(), bnd.end());

                    bool ok = true;
                    for (size_t k = 0; k < bnd.size(); ++k) {
                        if (rm[k] < bnd[k]) {
                            ok = false;
                            break;
                        }
                    }

                    if (ok) {
                        res[i] = '0' + d;
                        break;
                    }

                    a[d]++;
                }
            }
        }

        cout << res << '\n';
    }

    return 0;
}
