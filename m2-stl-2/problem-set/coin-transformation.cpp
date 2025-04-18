#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long ans = 1;

        while (n >= 4) {
            ans *= 2;
            n /= 4;  
        }

        cout << ans << '\n';
    }

    return 0;
}
