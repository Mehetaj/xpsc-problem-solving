#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, x;
    cin >> n >> x;

    vector<int> vec(n);

    for (long long int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    vec.erase(remove(vec.begin(), vec.end(), x), vec.end());

    for (long long int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
