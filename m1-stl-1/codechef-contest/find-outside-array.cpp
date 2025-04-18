#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    unordered_set<long long> s;
    for (int x : a)
        s.insert(x);

    bool allsame = true;
    for (int i = 1; i < n; ++i)
    {
        if (a[i] != a[0])
        {
            allsame = false;
            break;
        }
    }

    if (allsame)
    {
        long long sum = 2LL * a[0];
        if (s.count(sum))
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << a[0] << " " << a[0] << '\n';
        }
        return;
    }

    long long m = *max_element(a.begin(), a.end());
    long long min_val = *min_element(a.begin(), a.end());

    if (!s.count(m + m))
    {
        cout << m << " " << m << '\n';
        return;
    }
    if (!s.count(min_val + min_val))
    {
        cout << min_val << " " << min_val << '\n';
        return;
    }
    if (!s.count(m + min_val))
    {
        cout << m << " " << min_val << '\n';
        return;
    }

    for (int i : a)
    {
        if (!s.count(i + m))
        {
            cout << i << " " << m << '\n';
            return;
        }
    }
    for (int i : a)
    {
        if (!s.count(i + min_val))
        {
            cout << i << " " << min_val << '\n';
            return;
        }
    }
    for (int i : a)
    {
        if (!s.count(i + i))
        {
            cout << i << " " << i << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solution();

    return 0;
}
