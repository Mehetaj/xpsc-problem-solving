#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int amount = 100;

    while (t--)
    {
        int x;
        cin >> x;

        int remain = amount - x;
        int needTenDollar = remain / 10;
        int change = 0;

        while (needTenDollar--)
            change += 10;
        cout << change << endl;
    }
    return 0;
}