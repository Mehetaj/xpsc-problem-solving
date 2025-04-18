#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q,i;
    cin >> q;
    vector<pair<string, string>> v;

    while (q--)
    {
        string oldS, newS;
        cin >> oldS >> newS;
        for ( i = 0; i < v.size(); i++)
        {
            if (v[i].second == oldS)
            {
                v[i].second = newS;
                break;
            }
        }

        if (i == v.size())
            v.push_back({oldS, newS});
    }
    cout << v.size() << '\n';

    for ( i = 0; i < v.size(); i++)
        cout << v[i].first << " " << v[i].second << '\n';

    return 0;
}