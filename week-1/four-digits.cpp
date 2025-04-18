#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string str = to_string(n); 
    int need_zero = 4 - str.length(); 

    for (int i = 0; i < need_zero; i++) {
        str = "0" + str;  
    }

    cout << str << endl; 
    return 0;
}
