#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll logCeil(ll val) {
    if (val <= 1) return 0;
    return (ll)ceil(log2(val));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;

    while (test--) {
        ll rows, cols, posX, posY;
        cin >> rows >> cols >> posX >> posY;

        ll vertDist = min(posX, rows - posX + 1);
        ll horiDist = min(posY, cols - posY + 1);

        ll movesAcross = 1 + logCeil(cols) + logCeil(vertDist);
        ll movesDown = 1 + logCeil(rows) + logCeil(horiDist);

        cout << min(movesAcross, movesDown) << '\n';
    }

    return 0;
}
