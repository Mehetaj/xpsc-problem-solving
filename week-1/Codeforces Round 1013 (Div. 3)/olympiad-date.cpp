#include <bits/stdc++.h>
using namespace std;

bool check(map<int, int> &counts)
{
    return counts.at(0) >= 3 &&
           counts.at(1) >= 1 &&
           counts.at(2) >= 2 &&
           counts.at(3) >= 1 &&
           counts.at(5) >= 1;
}

int solve(vector<int> &digits)
{
    map<int, int> counts = {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {5, 0}};
    for (int i = 0; i < digits.size(); ++i)
    {
        int d = digits[i];
        if (counts.find(d) != counts.end())
        {
            counts[d]++;
        }
        if (check(counts))
        {
            return i + 1;
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> digits(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> digits[i];
        }
        cout << solve(digits) << '\n';
    }

    return 0;
}