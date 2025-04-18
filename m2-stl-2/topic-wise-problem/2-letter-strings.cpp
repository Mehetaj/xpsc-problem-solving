#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
        vector<string> v(n);
        map<string, ll> all;
        map<char, ll> first;
        map<char, ll> second;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            all[v[i]]++;
            first[v[i][0]]++;
            second[v[i][1]]++;
        }
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += max((ll)0, first[v[i][0]] - all[v[i]]);
            cnt += max((ll)0, second[v[i][1]] - all[v[i]]);
            if (all[v[i]])
                all[v[i]]--;
            if (first[v[i][0]])
                first[v[i][0]]--;
            if (second[v[i][1]])
                second[v[i][1]]--;
        }
        cout << cnt << '\n';
    }
    return 0;
}
