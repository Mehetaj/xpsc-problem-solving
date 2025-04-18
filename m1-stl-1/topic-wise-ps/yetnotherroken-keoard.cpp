
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
        string s;
        cin >> s;
        vector<long> smalls, caps;
        vector<bool> show(s.size(), true);

        for (long i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {
                show[i] = false;
                if (smalls.size() == 0)
                {
                    continue;
                }
                show[smalls.back()] = false;
                smalls.pop_back();
            }
            else if (s[i] == 'B')
            {
                show[i] = false;
                if (caps.size() == 0)
                {
                    continue;
                }
                show[caps.back()] = false;
                caps.pop_back();
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                smalls.push_back(i);
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                caps.push_back(i);
            }
        }

        for (long i = 0; i < s.size(); i++)
        {
            if (show[i])
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
}