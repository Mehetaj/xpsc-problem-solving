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
        int count = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int k = 1; k <= n; k++)
            {
                if (i + k == n)
                {
                    count++;
                }
            }
        }
        cout << count << '\n';
    }

    return 0;
}

