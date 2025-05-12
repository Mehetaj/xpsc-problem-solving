#include <bits/stdc++.h>
using namespace std;

int getParitu(vector<int> arr)
{
    int size = arr.size();
    vector<int> sortedArr = arr;
    map<int, int> compressedidx;
    sort(sortedArr.begin(), sortedArr.end());

    for (int i = 0; i < size; ++i)
        compressedidx[sortedArr[i]] = i;

    vector<int> BIT(size + 1, 0);
    int parity = 0;

    auto upBit = [&](int idx)
    {
        for (++idx; idx <= size; idx += idx & -idx)
            BIT[idx]++;
    };

    auto queryBIT = [&](int idx)
    {
        int res = 0;
        for (++idx; idx > 0; idx -= idx & -idx)
            res += BIT[idx];
        return res;
    };

    for (int i = size - 1; i >= 0; --i)
    {
        int idx = compressedidx[arr[i]];
        parity ^= queryBIT(idx - 1) % 2;
        upBit(idx);
    }

    return parity;
}

vector<int> alternatey(vector<int> EvnId, vector<int> oddId)
{
    int total = EvnId.size() + oddId.size();
    vector<int> res(total);
    int evenPtr = 0, oddPtr = 0;

    for (int i = 0; i < total; ++i)
    {
        if (i % 2 == 0)
            res[i] = EvnId[evenPtr++];
        else
            res[i] = oddId[oddPtr++];
    }
    return res;
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
        vector<int> a(n), even, odd;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            (i % 2 == 0 ? even : odd).push_back(a[i]);
        }

        vector<int> evenSort = even;
        vector<int> oddSort = odd;
        sort(evenSort.begin(), evenSort.end());
        sort(oddSort.begin(), oddSort.end());

        int evenParity = getParitu(even);
        int oddParity = getParitu(odd);

        vector<int> fainal;

        if (evenParity == oddParity)
        {
            fainal = alternatey(evenSort, oddSort);
        }
        else
        {
            vector<int> alEven = evenSort, alOdd = oddSort;

            if (alEven.size() >= 2)
                swap(alEven[alEven.size() - 1], alEven[alEven.size() - 2]);

            if (alOdd.size() >= 2)
                swap(alOdd[alOdd.size() - 1], alOdd[alOdd.size() - 2]);

            vector<int> c1 = alternatey(alEven, oddSort);
            vector<int> c2 = alternatey(evenSort, alOdd);

            fainal = min(c1, c2);
        }

        for (int v : fainal)
            cout << v << " ";
        cout << "\n";
    }
    return 0;
}
