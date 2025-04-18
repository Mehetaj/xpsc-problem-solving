#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int cnt = 0, size = str1.length();

    for (int i = 0; i < size; i++)
        if (str1[i] != str2[i])
            cnt++;

    cout << cnt;
    return 0;
}