#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        vector<long> v(n);
        for (long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long m;
        cin >> m;
        while (m--)
        {
            map<long, char> numchar;
            map<char, long> charnum;
            string s;
            cin >> s;
            if (s.size() != n)
            {
                cout << "NO" << '\n';
                continue;
            }
            bool ans(true);
            for (long p = 0; ans && p < s.size(); p++)
            {
                long f(v[p]);
                char g(s[p]);
                if (numchar.count(f) ^ charnum.count(g))
                {
                    ans = false;
                }
                if (!numchar.count(f))
                {
                    numchar[f] = g;
                    charnum[g] = f;
                }
                else if (numchar[f] != g || charnum[g] != f)
                {
                    ans = false;
                }
            }
            cout << (ans ? "YES" : "NO") << '\n';
        }
    }
}