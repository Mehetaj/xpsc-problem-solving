#include <bits/stdc++.h>
using namespace std;

bool is_possible(int x, const vector<int> &a, int k)
{
    if (x == 0)
    {
        return true;
    }
    int n = a.size();
    int cnt = 0;
    unordered_set<int> curr;
    for (int num : a)
    {
        if (num < x)
        {
            curr.insert(num);
        }
        if (curr.size() == x)
        {
            cnt++;
            curr.clear();
            if (cnt >= k)
            {
                return true;
            }
        }
    }
    return cnt >= k;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int low = 0, high = n;
        int answer = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (is_possible(mid, a, k))
            {
                answer = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << answer << '\n';
    }
    return 0;
}