#include <bits/stdc++.h>
using namespace std;

int get(char a, char b) {
    if (a == b) return 0; 
    if ((a == 'R' && b == 'S') || 
        (a == 'S' && b == 'P') || 
        (a == 'P' && b == 'R')) return 1; 
    return -1; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string a,b;
        cin >> a >> b;

        int chef = 0, chefina = 0;
        vector<int> flips;

        for (int i = 0; i < n; ++i) {
            int result = get(a[i], b[i]);
            if (result == 1) chef++;
            else if (result == -1) {
                chefina++;
                flips.push_back(1); 
            } else {
                flips.push_back(0);
            }
        }

        if (chef > chefina) {
            cout << 0 << '\n';
        } else {
            int need = (chefina - chef) / 2 + 1;
            int cng = 0;
            sort(flips.begin(), flips.end(), greater<int>()); 

            for (int x : flips) {
                if (need <= 0) break;
                cng++;
                if (x == 1) need--; 
                else if (x == 0) need -= 1; 
            }

            cout << cng << '\n';
        }
    }

    return 0;
}
