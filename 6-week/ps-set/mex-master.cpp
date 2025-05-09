#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);  
    cin.tie(nullptr);          

    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        
        int sum = 0;
        bool flag = false;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0)
                sum++;
            else if (a[i] >= 2)
                flag = true;
        }

        if (sum <= (n + 1) / 2) {
            cout << "0\n";
        }
        else if (flag || sum == n) {
            cout << "1\n";
        }
        else {
            cout << "2\n";
        }
    }

    return 0;
}
