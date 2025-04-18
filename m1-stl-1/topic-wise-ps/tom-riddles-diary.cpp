#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int n;
    string s[105];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        cin >> s[i];
        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}