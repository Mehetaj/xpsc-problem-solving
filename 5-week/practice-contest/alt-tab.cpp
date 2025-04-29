#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    deque<string> order;
    map<string, deque<string>::iterator> pos;

    for (int i = 0; i < n; ++i) {
        string pg;
        cin >> pg;

        if (pos.find(pg) != pos.end()) {
            order.erase(pos[pg]);
        }

        order.push_front(pg);

        pos[pg] = order.begin();
    }

    for (const string &pg : order) {
        cout << pg.substr(pg.length() - 2); 
    }
    cout << '\n';

    return 0;
}
