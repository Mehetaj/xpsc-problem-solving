#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, x, y;
    cin >> n >> m;
    cin >> x >> y;

    cout << (n * x) + (m * y) << '\n';

    return 0;
}