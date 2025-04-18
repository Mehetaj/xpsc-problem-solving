#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long t;
    cin >> t; 
    
    while (t--) {
        long n, k;
        cin >> n >> k; 
        
        string s;
        cin >> s; 
        
        array<int, 26> frq = {0};  
        
        for (char c : s) {
            ++frq[c - 'a'];
        }
        
        int odd = 0;
        
        for (int count : frq) {
            if (count % 2 != 0) {
                ++odd;
            }
        }
        
        cout << (odd <= k + 1 ? "YES" : "NO") << "\n";
    }
}
