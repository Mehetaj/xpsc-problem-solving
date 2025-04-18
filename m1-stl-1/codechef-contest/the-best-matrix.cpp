#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> genMatrix(int n, int m, int startVal, int dx, int dy) {
    vector<vector<int>> best(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            best[i][j] = startVal + dx * i + dy * j;
    return best;
}

int diffrence(vector<vector<int>>& a, vector<vector<int>>& b) {
    int diff = 0;
    for (int i = 0; i < a.size(); ++i)
        for (int j = 0; j < a[0].size(); ++j)
            if (a[i][j] != b[i][j])
                ++diff;
    return diff;
}

int solvingcases(int n, int m, vector<vector<int>>& a) {
    int minChanges = INT_MAX;

    for (int dx : {-1, 1}) {
        for (int dy : {-1, 1}) {
            for (int parity = 0; parity < 2; ++parity) {
                int startVal = (a[0][0] % 2 == parity) ? a[0][0] : a[0][0] + 1;
                auto best = genMatrix(n, m, startVal, dx, dy);
                int changes = diffrence(a, best);
                minChanges = min(minChanges, changes);
            }
        }
    }
    return minChanges;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> a[i][j];
        cout << solvingcases(n, m, a) << endl;
    }
    return 0;
}
