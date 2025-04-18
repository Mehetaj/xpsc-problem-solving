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
        string a, b;
        cin >> a >> b;
        int cnt_a = 0, cnt_b = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i & 1)
            {
                cnt_b += a[i] == '0';
                cnt_a += b[i] == '0';
            }
            else
            {
                cnt_a += a[i] == '0';
                cnt_b += b[i] == '0';
            }
        }
        cout << (cnt_a >= (n + 1) / 2 && cnt_b >= n / 2 ? "Yes" : "No") << '\n';
    }
    return 0;
}
