#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
    {
        int x;
        cin >> x;

        if (x % 2 == 1)  
            cout << "YES" << '\n';
        else  
            cout << "NO" << '\n';
    }

    return 0;
}