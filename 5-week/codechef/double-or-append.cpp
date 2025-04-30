#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;

        ll n = 1;
        ll sum = 0;
        ll c = 0;

        ll k = 0;

        for (int i = 0; i < m; i++)
        {
            int t;
            cin >> t;
            if (t == 1)
            {

                sum += n;
                c += n;
                n += 1;
                k += 1;
            }
            else
            {

                sum = 2 * sum + c;
                c = 4 * c;
                n = 2 * n;
            }
            cout << sum << (i + 1 < m ? ' ' : '\n');
        }
    }

    return 0;
}