#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> v;
    string s;
    while (n--)
    {
        cin >> s;
        if (v.count(s) == 0)
        {
            cout << "OK" << endl;
            v[s] = 1;
        }
        else
        {
            cout << s << v[s] << endl;
            v[s] += 1;
        }
    }
    return 0;
}