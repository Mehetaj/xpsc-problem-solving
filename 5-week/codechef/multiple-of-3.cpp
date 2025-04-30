#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n % 3 == 0)
        cout << n;
    else if ((n + 1) % 3 == 0)
        cout << n + 1;
    else if ((n - 1) % 3 == 0)
        cout << n - 1;

    return 0;
}