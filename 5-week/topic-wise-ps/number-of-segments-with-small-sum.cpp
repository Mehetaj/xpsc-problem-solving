#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    ll s;

    cin >> n >> s;
    vector<int> v(n);
    for (int &x : v)
    {
        cin >> x;
    }

    int l = 0;
    ll sum = 0, res = 0;

    for (int i = 0; i < n; ++i)
    {
        sum += v[i];

        while (sum > s)
        {
            sum -= v[l++];
        }

        res += i - l + 1;
    }

    cout << res << endl;

    return 0;
}
