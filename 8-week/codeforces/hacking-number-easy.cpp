#include <bits/stdc++.h>
using namespace std;
#define ll long long

void enigmaDecoder() {
    ll target;
    cin >> target;
    string res;
    
    cout << "mul 7" << '\n';
    cout.flush();
    cin >> res;
    if (res == "-1") return;
    
    ll adj = (10 - (7 % 10)) % 10;
    cout << "add " << adj << '\n';
    cout.flush();
    cin >> res;
    if (res == "-1") return;
    
    cout << "digit" << '\n';
    cout.flush();
    cin >> res;
    if (res == "-1") return;
    
    ll finaladj = target - (7 + adj);
    cout << "add " << finaladj << '\n';
    cout.flush();
    cin >> res;
    if (res == "-1") return;
    
    cout << "!" << '\n';
    cout.flush();
    cin >> res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test;
    cin >> test;
    
    while (test--) {
        enigmaDecoder();
    }
    
    return 0;
}
