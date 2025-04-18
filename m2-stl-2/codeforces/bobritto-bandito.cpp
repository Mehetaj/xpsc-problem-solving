#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;

    while (t--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int leftNeeded = -l;

        int leftMoves = (m < leftNeeded ? m : leftNeeded);
        int rightMoves = m - leftMoves;

        cout << -leftMoves << " " << rightMoves << endl;
    }

    return 0;
}
