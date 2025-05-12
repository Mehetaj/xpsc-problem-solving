#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a;
        ll odd = 0;

        for (int i = 0; i < n; ++i) {
            ll x;
            cin >> x;
            if (x % 2) {
                odd = max(odd, x);
            } else {
                a.push_back(x);
            }
        }

        if (a.size() == n) {
            cout << "0\n";
            continue;
        }

        sort(a.begin(), a.end());
        ll cnt = a.size();

        for ( auto& val : a) {
            if (odd > a.back()) {
                break;
            } else if (odd < val) {
                ++cnt;
                break;
            } else {
                odd += val;
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}
