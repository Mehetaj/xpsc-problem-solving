#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int sumS = 0; 
    int sumD = 0; 
    int left = 0, right = n - 1;  

    bool serejaTurn = true; 

    while (left <= right) {
        if (v[left] > v[right]) {
            if (serejaTurn)
                sumS += v[left];
            else
                sumD += v[left];
            left++; 
        } else {
            if (serejaTurn)
                sumS += v[right];
            else
                sumD += v[right];
            right--;  
        }

        serejaTurn = !serejaTurn;
    }

    cout << sumS << " " << sumD << "\n";

    return 0;
}
