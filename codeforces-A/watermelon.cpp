#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int n;
    cin >> n;

    if (n % 2 == 1)
        cout << "NO" << "\n";
    else
    {
        if (n == 2)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
    }
    return 0;
}

