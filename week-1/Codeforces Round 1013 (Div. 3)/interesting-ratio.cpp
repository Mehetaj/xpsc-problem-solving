#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e4;

vector<bool> chck_prime;
vector<int> primes;

void sieve() {
    chck_prime.resize(MAX_N + 1, true);
    chck_prime[0] = chck_prime[1] = false;
    for (int i = 2; i <= MAX_N; ++i) {
        if (chck_prime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= MAX_N; j += i) {
                chck_prime[j] = false;
            }
        }
    }
}

int solve(int n) {
    int cnt = 0;
    for (int p : primes) {
        if (p > n) break;
        int max_a = n / p;
        if (max_a < 1) continue;
        cnt += max_a;
    }
    return cnt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << '\n';
    }

    return 0;
}