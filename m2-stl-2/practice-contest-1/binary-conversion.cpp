#include <bits/stdc++.h>
using namespace std;

void binary_convert()
{
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;

    vector<int> freq_s(2, 0), freq_t(2, 0);
    for (int i = 0; i < n; i++)
    {
        freq_s[s[i] - '0']++;
        freq_t[t[i] - '0']++;
    }

    if (freq_s != freq_t)
    {
        cout << "NO\n";
        return;
    }

    int match = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            match++;
        }
    }

    int minswap = (match + 1) / 2;

    if (k < minswap)
    {
        cout << "NO\n";
        return;
    }

    if (n == 2)
    {
        if (match == 0)
        {
            cout << (k == 0 ? "YES\n" : "NO\n");
        }
        else if (match == 2)
        {
            cout << (k == 1 ? "YES\n" : "NO\n");
        }
        return;
    }

    if (k >= minswap)
    {
        int cnt0 = freq_t[0];
        int cnt1 = freq_t[1];
        long long reduanp = (1LL * cnt0 * (cnt0 - 1) / 2) + (1LL * cnt1 * (cnt1 - 1) / 2);
        if (match == 0)
        {
            cout << (reduanp >= k ? "YES\n" : "NO\n");
        }
        else
        {
            cout << "YES\n";
        }
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        binary_convert();
    }

    return 0;
}