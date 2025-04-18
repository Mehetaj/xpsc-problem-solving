#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int x = 0, y = 0;

    x += a;

    y += b;

    x -= c;

    y -= d;

    cout << x << " " << y << endl;

    return 0;
}
