#include <bits/stdc++.h>
using namespace std;

double totalCost(string &s)
{
    int dgSum = 0;
    for (char c : s)
    {
        dgSum += (c - '0');
    }
    if (dgSum == 0)
        return numeric_limits<double>::max();
    return stod(s) / dgSum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int len = n.size();
        int minRmv = len - 1;
        double mnCost = numeric_limits<double>::max();

        for (int mask = 1; mask < (1 << len); ++mask)
        {
            string nmbr = "";
            for (int i = 0; i < len; ++i)
            {
                if (mask & (1 << i))
                {
                    nmbr += n[i];
                }
            }

            bool zero = true;
            for (char c : nmbr)
            {
                if (c != '0')
                {
                    zero = false;
                    break;
                }
            }
            if (zero)
                continue;

            double cost = totalCost(nmbr);
            int removed = len - nmbr.size();
            if (cost < mnCost || (abs(cost - mnCost) < 1e-9 && removed < minRmv))
            {
                mnCost = cost;
                minRmv = removed;
            }
        }
        cout << minRmv << endl;
    }
    return 0;
}
