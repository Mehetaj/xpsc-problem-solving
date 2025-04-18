#include <bits/stdc++.h>
using namespace std;

bool check_prime(long long int n)
{
    if (n < 2)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (long long int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        int k;
        cin >> x >> k;

        string y = "";
        for (int i = 0; i < k; i++)
        {
            y += x;
        }

        if (y.length() > 18)
        {
            cout << "NO" << '\n';
            continue;
        }

        long long int num = stoull(y);
        if (check_prime(num))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
