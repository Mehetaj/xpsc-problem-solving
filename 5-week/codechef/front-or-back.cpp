#include <bits/stdc++.h>
using namespace std;
#define int long long
 
const int mx = 998244353;
 
int32_t main() 
{
 
 
    int t;
    cin >> t;
    while (t--) 
    {
 
        int n;
        cin >> n;
        vector<int> fr(n, 0);
        for (int i = 0; i < n; i++) 
        {
            int a;
            cin >> a;
 
            if (a >= 0 && a < n) 
                fr[a]++;
            else 
                fr[0] = n + 1;  
        }
 
        bool flag = true;
        int ans = 1;
 
 
        for (int p = 0; p < n - 1 - p; p++) 
        {
            int q = n - 1 - p;
            int f = fr[p] + fr[q];
            if (f > 2) 
            {
                flag = false;
                break;
            }
 
            if (f >= 1) {
                ans = ans * 2 % mx;
            }
        }
 
        if (!flag) 
        {
            cout << 0 << "\n";
            continue;
        }
 
 
        if (n % 2 == 1) 
        {
            int c = (n - 1) / 2;
 
            if (fr[c] > 1) 
            {
                ans = 0;
            }
        }
 
        cout << ans << "\n";
    }
 
    return 0;
}