#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long int jumps, dis, shorts, longs;
        cin >> jumps >> dis >> shorts >> longs;
        
        long long int diff = longs - shorts;
        long long int totalWith = jumps * longs;
        long long int needShort = (totalWith - dis) / diff;
        
        if (totalWith < dis) {
            cout << "No" << '\n';
        } else if ((totalWith - dis) % diff != 0) {
            cout << "No" << '\n';
        } else if (needShort >= 0 && needShort <= jumps) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }
    return 0;
}