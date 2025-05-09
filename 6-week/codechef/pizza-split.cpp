#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int cnt = 0;

    if (n % 2)
        cnt = 1;
    else
        cnt++;

    cout << cnt << '\n';

    return 0;
}