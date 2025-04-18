#include <bits/stdc++.h>
using namespace std;

void cypher_mehataz() {
	int n;
	cin >> n;
	vector<int> digits(n);
	for (int i = 0; i < n; i++) {
		cin >> digits[i];
	}
	for (int i = 0; i < n; i++) {
		int b;
		string s;
		cin >> b >> s;
		for (char move : s) {
			if (move == 'U') {
				digits[i] = (digits[i] == 0 ? 9 : digits[i] - 1);
			} else {
				digits[i] = (digits[i] == 9 ? 0 : digits[i] + 1);
			}
		}
	}
	for (int x : digits) {
		cout << x << " ";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cypher_mehataz();
	}
}