#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr)
{
    int max = arr[0];

    for (int i = 1; i < arr.size(); i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << largest(a) << '\n';
    }

    return 0;
}