#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, t, count = 0;
    cin >> s >> t;

    for (int k = 0; k <= s; k++)
        for (int i = 0; i <= s; i++)
            for (int j = 0; j <= s; j++)
                if ((k + i + j) <= s && (k * i * j) <= t)
                    count++;
    cout << count << "\n";
    return 0;
}