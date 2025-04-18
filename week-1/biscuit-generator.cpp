#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a_bisc, biscuits, times;
    cin >> a_bisc >> biscuits >> times;
    times += 0.5;
    int ans = (int)(times / a_bisc) * biscuits;
    cout << ans << endl;
}