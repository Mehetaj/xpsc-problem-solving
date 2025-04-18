#include <bits/stdc++.h>
using namespace std;

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

        vector<int> stick(n);
        for (int i = 0; i < n; i++)
        {
            cin >> stick[i];
        }

        int breaks = 0;
        for (int i = 0; i < n; i++)
        {
            breaks += stick[i] - 1;
        }

        cout << breaks << endl;
    }

    return 0;
}
