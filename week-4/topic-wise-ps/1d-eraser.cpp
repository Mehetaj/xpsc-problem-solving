#include <bits/stdc++.h>

using namespace std;

int MAX = 200'007;
int MOD = 1'000'000'007;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                cnt++;
                i += k - 1;
            }
        }
        cout << cnt << '\n';
    }
}