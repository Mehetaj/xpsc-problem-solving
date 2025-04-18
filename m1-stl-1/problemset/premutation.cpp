#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> permute(n, vector<int>(n - 1));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                cin >> permute[i][j];
            }
        }

        vector<int> first_cnt(n + 1, 0); 

        for (int i = 0; i < n; i++) {
            first_cnt[permute[i][0]]++;
        }

        int first_elm = -1, max_freq = -1;
        for (int i = 1; i <= n; i++) {
            if (first_cnt[i] > max_freq) {
                max_freq = first_cnt[i];
                first_elm = i;
            }
        }

        vector<int> ans = {first_elm};

        for (int i = 0; i < n; i++) {
            if (permute[i][0] != first_elm) {
                ans.insert(ans.end(), permute[i].begin(), permute[i].end());
                break;
            }
        }

        for (int num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
