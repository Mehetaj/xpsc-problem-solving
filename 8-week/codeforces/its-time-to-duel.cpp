#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int tests;
    cin >> tests;

    while (tests--) {
        int len;
        cin >> len;

        vector<int> data(len + 1);
        for (int i = 1; i <= len; ++i) {
            cin >> data[i];
        }

        int cnt = len - 1;
        vector<vector<int>> links(cnt + 1);
        vector<pair<int, bool>> preSet;

        for (int i = 1; i <= len; ++i) {
            if (data[i] == 0) {
                if (i > 1) preSet.emplace_back(i - 1, true);
                if (i < len) preSet.emplace_back(i, false);
            } else {
                if (i == 1) {
                    preSet.emplace_back(1, true);
                } else if (i == len) {
                    preSet.emplace_back(len - 1, false);
                } else {
                    links[i - 1].push_back(i);
                }
            }
        }

        vector<int> ans(cnt + 1, -1);
        deque<pair<int, bool>> q(preSet.begin(), preSet.end());

        bool flag = false;

        while (!q.empty() && !flag) {
            auto [idx, state] = q.front();
            q.pop_front();

            if (ans[idx] != -1) {
                if (ans[idx] != (state ? 1 : 0)) {
                    flag = true;
                }
                continue;
            }

            ans[idx] = state;

            if (state) {
                for (int protibeshi : links[idx]) {
                    q.emplace_back(protibeshi, true);
                }
            }
        }

        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}
