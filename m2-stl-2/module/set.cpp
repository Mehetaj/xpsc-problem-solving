#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> s;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    // auto it = s.begin();
    // cout << &it << '\n';

    for (auto x : s)
    {
        cout << x << ' ';
    }

    cout << '\n';

    // auto it = s.find(5);
    // if (it != s.end())
    // {
    //     cout << "FOUND" << '\n';
    // }
    // else
    // {
    //     cout << "NOT FOUND" << '\n';
    // }

    // s.erase(5);

    // for (auto x : s)
    // {
    //     cout << x << ' ';
    // }

    // cout << '\n';

    int N;
    cin >> N;
    auto it = s.upper_bound(N);

    if (it == s.end())
        cout << "END" << '\n';
    else
        cout << *it << '\n';

    return 0;
}