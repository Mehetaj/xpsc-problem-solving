#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string w;
        cin >> w;

        int size = w.size();

        w.pop_back();
        w[size - 2] = 'i';
        cout << w << endl;
        
    }
    return 0;
}