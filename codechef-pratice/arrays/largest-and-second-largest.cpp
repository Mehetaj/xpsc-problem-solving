#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        

        int first = -1, second = -1;

        set<int> s(a, a + n);

        vector<int> v(s.begin(), s.end());
        sort(v.rbegin(), v.rend());

        first = v[0];
        second = v[1];

        cout << (first + second) << '\n';
    }

    return 0;
}
