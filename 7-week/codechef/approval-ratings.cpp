#include <bits/stdc++.h>
using namespace std;

int cmp_int(const void *a, const void *b) {
    return (*(int*)a) - (*(int*)b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int a[5];
        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum >= 35)
        {
            cout << 0 << '\n';
            continue;
        }

        qsort(a, 5, sizeof(int), cmp_int);
        int deficit = 35 - sum;
        int coins = 0;

        for (int i = 0; i < 5 && deficit > 0; i++)
        {
            int gain = 10 - a[i];
            deficit -= gain;
            coins += 100;
        }

        cout << coins << '\n';
    }

    return 0;
}