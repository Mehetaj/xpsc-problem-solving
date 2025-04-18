#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ios_base::sync_with_stdio(false);
    ll n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        ll cut(0);
        for (ll p = 1; !cut && p < s.size(); p++)
        {
            if (s[p - 1] == s[p])
            {
                cut = p;
                break;
            }
        }

        if (!cut)
        {
            cout << (s[0] == 'a' ? 'b' : 'a') << s << endl;
        }
        else
        {
            cout << (s.substr(0, cut)) << (s[cut - 1] == 'a' ? 'b' : 'a') << s.substr(cut) << endl;
        }
    }
}