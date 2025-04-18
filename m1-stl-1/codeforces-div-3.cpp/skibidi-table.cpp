#include <bits/stdc++.h>
using namespace std;

#define ll long long int

pair<int, int> coordinate(ll d, int size, ll offset = 1)
{
    if (size == 2)
    {
        vector<pair<int, int>> cords = {{1, 1}, {2, 2}, {2, 1}, {1, 2}};
        return cords[d - offset];
    }

    ll block = (size / 2) * (size / 2);
    if (d < offset || d >= offset + 4 * block)
    {
        exit(1);
    }

    if (d < offset + block)
    {
        auto p = coordinate(d, size / 2, offset);
        return {p.first, p.second};
    }
    if (d < offset + 2 * block)
    {
        auto p = coordinate(d, size / 2, offset + block);
        return {p.first + size / 2, p.second + size / 2};
    }
    if (d < offset + 3 * block)
    {
        auto p = coordinate(d, size / 2, offset + 2 * block);
        return {p.first + size / 2, p.second};
    }
    auto p = coordinate(d, size / 2, offset + 3 * block);
    return {p.first, p.second + size / 2};
}

ll nmbr(int x, int y, int size, ll offset = 1)
{
    if (size == 2)
    {
        if (x == 1 && y == 1)
            return offset;
        if (x == 2 && y == 2)
            return offset + 1;
        if (x == 2 && y == 1)
            return offset + 2;
        return offset + 3;
    }

    ll block = (size / 2) * (size / 2);
    if (x <= 0 || x > size || y <= 0 || y > size)
    {
        exit(1);
    }

    if (x <= size / 2 && y <= size / 2)
        return nmbr(x, y, size / 2, offset);
    if (x > size / 2 && y > size / 2)
        return nmbr(x - size / 2, y - size / 2, size / 2, offset + block);
    if (x > size / 2 && y <= size / 2)
        return nmbr(x - size / 2, y, size / 2, offset + 2 * block);
    return nmbr(x, y - size / 2, size / 2, offset + 3 * block);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int size = 1 << n;
        while (q--)
        {
            string str;
            cin >> str;
            if (str == "->")
            {
                int x, y;
                cin >> x >> y;
                cout << nmbr(x, y, size) << '\n';
            }
            else
            {
                ll d;
                cin >> d;
                auto [x, y] = coordinate(d, size);
                cout << x << ' ' << y << '\n';
            }
        }
    }
    return 0;
}
