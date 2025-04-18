#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    string name, ip;
    map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> ip;
        ip += ';';
        mp[ip] = name;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> name >> ip;
        cout << name << " " << ip << " #" + mp[ip] << endl;
    }

    return 0;
}
