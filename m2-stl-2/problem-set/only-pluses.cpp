#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> v(3);
    while (t--)
    {
        for (int i = 0; i < 3; i++)
            cin >> v[i];

        for (int i = 0; i < 5; i++)
        {
            sort(v.begin(), v.end());
            v[0] += 1;
        }

        cout << v[0] * v[1] * v[2] << '\n';
    }

    return 0;
}