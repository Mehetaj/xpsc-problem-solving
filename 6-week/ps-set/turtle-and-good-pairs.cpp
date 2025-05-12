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
        string s;
        cin >> n >> s;

        vector<pair<int, char>> freq(26);
        for (int i = 0; i < 26; ++i)
        {
            freq[i] = {0, static_cast<char>('a' + i)};
        }

        for (char c : s)
        {
            ++freq[c - 'a'].first;
        }

        sort(freq.begin(), freq.end(), greater<>());

        queue<pair<int, char>> q;

        while (freq[0].first > freq[1].first)
        {
            cout << freq[0].second;
            --freq[0].first;
        }

        for (auto &p : freq)
        {
            q.push(p);
        }

        while (!q.empty())
        {
            auto [count, ch] = q.front();
            q.pop();
            if (count == 0)
                continue;
            cout << ch;
            --count;
            q.push({count, ch});
        }

        cout << '\n';
    }

    return 0;
}
