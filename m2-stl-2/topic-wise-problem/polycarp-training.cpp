#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    ll k = 1, res = 0;
    for (int i = 0; i < n; i++) {
        if (k <= v[i]) {
            res++;
            k++;
        }
    }

    cout << res << endl;
    return 0;
}
