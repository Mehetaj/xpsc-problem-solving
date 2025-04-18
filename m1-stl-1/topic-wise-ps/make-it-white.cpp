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

        string s;
        cin >> s;

        auto first = find(s.begin(), s.end(), 'B');
        auto last = find(s.rbegin(), s.rend(), 'B');

        if (first == s.end())
        {
            cout << 0 << "\n";
        }
        else
        {
            int firstIdx = first - s.begin();
            int lastIdx = (last.base()) - s.begin() - 1;

            cout << (lastIdx - firstIdx + 1) << "\n";
        }
    }

    return 0;
}
