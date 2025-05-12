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
        vector<int> a(n);

        for (int &num : a)
            cin >> num;

        int x = abs(a[0]);
        int cnt = 0;
        for (int num : a)
            if (abs(num) <= x)
                cnt++;

        cout << (cnt <= (n / 2 + 1) ? "YES\n" : "NO\n");
    }

    return 0;
}
