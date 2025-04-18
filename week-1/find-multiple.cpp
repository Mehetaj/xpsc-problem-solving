#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int mul = ((a + c - 1) / c) * c;

    if (mul >= a && mul <= b) {
        cout << mul;
    } else {
        cout << -1;
    }

    return 0;
}
