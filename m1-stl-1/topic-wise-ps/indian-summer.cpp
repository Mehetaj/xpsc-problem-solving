#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    vector<string> s(n);  

    for (int i = 0; i < n; i++) {
        getline(cin, s[i]);
    }

    sort(s.begin(), s.end());  
    auto last = unique(s.begin(), s.end());  
    s.erase(last, s.end());  

    cout << s.size() << endl; 

    return 0;
}
