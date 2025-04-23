#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> s;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    for (auto x : s)
    {
        cout << x << ' ';
    }
    cout << '\n';

    return 0;
}