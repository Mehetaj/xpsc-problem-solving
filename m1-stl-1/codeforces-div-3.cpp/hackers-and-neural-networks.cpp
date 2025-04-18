#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<vector<string>> b(m, vector<string>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> b[i][j];
        }
    }

    vector<bool> covered(n, false);
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            if (b[i][j] == a[j]) {
                covered[j] = true;
                break;
            }
        }
        if (!covered[j]) {
            return -1;
        }
    }

    queue<vector<string>> q;
    unordered_map<string, int> visited; 

    vector<string> initial(n, "*");
    q.push(initial);
    int steps = 0;
    set<vector<string>> seen;
    seen.insert(initial);

    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            vector<string> current = q.front();
            q.pop();
            if (current == a) {
                return steps;
            }
            for (int net = 0; net < m; ++net) {
                vector<string> next = current;
                bool filled = false;
                for (int pos = 0; pos < n; ++pos) {
                    if (next[pos] == "*" && b[net][pos] == a[pos]) {
                        next[pos] = b[net][pos];
                        filled = true;
                        break;
                    }
                }
                if (filled && seen.find(next) == seen.end()) {
                    seen.insert(next);
                    q.push(next);
                }
            }
            for (int pos = 0; pos < n; ++pos) {
                if (current[pos] != "*") {
                    vector<string> next = current;
                    next[pos] = "*";
                    if (seen.find(next) == seen.end()) {
                        seen.insert(next);
                        q.push(next);
                    }
                }
            }
        }
        steps++;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << '\n';
    }
    return 0;
}