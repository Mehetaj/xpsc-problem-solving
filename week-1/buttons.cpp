#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int mx = 0;

    if (a > b)
        mx = 2 * a - 1;
    else if (a < b)
        mx = 2 * b - 1;
    else
        mx = a + b;

    cout << mx;

    return 0;
}

