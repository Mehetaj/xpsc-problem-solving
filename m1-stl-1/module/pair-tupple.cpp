#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair<string, int> student = {"rahim", 10};
    // cout << student.first << " " << student.second << "\n";

    // auto [name, roll] = student;

    // cout << name << " " << roll;

    // ---------------------------------

    // int n;
    // cin >> n;

    // pair<string, int>  students[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> students[i].first >> students[i].second;
    // }

    // for (auto [x, y] : students)
    // {
    //     cout << x << " " << y << "\n";
    // }

    // ----------------------------------

    // tuple<string, int, string> t = {"rahim", 10, "0171"};

    // // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << "\n";

    // auto [name, roll, phone] = t;

    // cout << name << " " << roll << " " << phone << "\n";

    // pair<string, pair<int, string>> p = {"dablu", {5, "01618"}};

    // cout << p.first << " " << p.second.first << " " << p.second.second << endl;

    // ------------------------------------------------------------------

    int n;
    cin >> n;
    tuple<string, int, int> t[n];

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, num;

        cin >> name >> roll >> num;

        t[i] = {name, roll, num};
    }

    for (auto [x, y, z] : t)
    {
        cout << x << " " << y << " " << z << "\n";
    }
    return 0;
}