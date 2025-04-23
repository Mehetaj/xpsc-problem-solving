#include <bits/stdc++.h>
using namespace std;
#define MAXN 200005

int n;
int bit[MAXN];
char s[MAXN], t[MAXN];
vector<int> op;

void upd(int i, int v)
{
    for (; i <= n; i += i & -i)
        bit[i] += v;
}

int summ(int i)
{
    int s = 0;
    for (; i > 0; i -= i & -i)
        s += bit[i];
    return s;
}

int kh_find(int k)
{
    int cnt = 0;
    for (int stpe = 1 << 18; stpe > 0; stpe >>= 1)
    {
        int next = cnt + stpe;
        if (next <= n && bit[next] < k)
        {
            cnt = next;
            k -= bit[next];
        }
    }
    return cnt + 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        cin >> s;
        cin >> t;

        memset(bit + 1, 0, n * sizeof *bit);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                upd(i + 1, +1);
        }

        op.clear();
        bool flag = true;

        for (int i = n - 1; i >= 1; i--)
        {
            if (s[i] != t[i])
            {
                int cnt = summ(i);
                if (cnt == 0)
                {
                    flag = false;
                    break;
                }

                int u = kh_find(cnt);

                for (int j = u - 1; j < i - 1; j++)
                {
                    op.push_back(j + 1);
                    if (s[j + 1] == '0')
                    {
                        s[j + 1] = '1';
                        upd(j + 2, +1);
                    }
                    else
                    {
                        s[j + 1] = '0';
                        upd(j + 2, -1);
                    }
                }

                op.push_back(i);
                if (s[i] == '0')
                {
                    s[i] = '1';
                    upd(i + 1, +1);
                }
                else
                {
                    s[i] = '0';
                    upd(i + 1, -1);
                }
            }
        }

        if (!flag || s[0] != t[0])
        {
            cout << "-1" << '\n';
        }
        else
        {
            cout << op.size() << '\n';
            for (size_t k = 0; k < op.size(); k++)
            {
                cout << op[k] << (k + 1 < op.size() ? " " : "");
            }
            cout << '\n';
        }
    }
    return 0;
}
