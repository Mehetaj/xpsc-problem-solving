#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        vector<bool> z(n);
        for (int i = 0; i < n; ++i)
        {
            z[i] = (s[i] == '0');
        }

        vector<int> segid(n, -1);
        vector<pair<int, int>> sg;
        int uid = 0;
        int j = 0;

        while (j < n)
        {
            if (z[j])
            {
                int L = j;
                while (j < n && z[j])
                {
                    segid[j] = uid;
                    ++j;
                }
                int R = j - 1;
                sg.emplace_back(L, R);
                ++uid;
            }
            else
            {
                ++j;
            }
        }

        int k = uid;
        vector<ll> usize(k), dsize(k);
        int NN = n - 1;

        for (int idx = 0; idx < k; ++idx)
        {
            int L = sg[idx].first, R = sg[idx].second;
            int cnt = R - L + 1;
            ll sumj = 0;
            if (L > 0)
            {
                sumj = (1LL * R * (R + 1) / 2) - (1LL * (L - 1) * L / 2);
            }
            else
            {
                sumj = 1LL * R * (R + 1) / 2;
            }
            usize[idx] = sumj;
            dsize[idx] = 1LL * cnt * NN - sumj;
        }

        vector<int> diayg(n, -1);
        int did = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                diayg[i] = did++;
            }
        }

        int M = did;
        int ttal = 2 * k + M;
        vector<vector<int>> g(ttal);

        for (int i = 0; i < n; ++i)
        {
            int di = diayg[i];
            if (di != -1)
            {
                int nid = 2 * k + di;
                if (i - 1 >= 0 && z[i - 1])
                {
                    int sid = segid[i - 1];
                    g[nid].push_back(k + sid);
                    g[k + sid].push_back(nid);
                }
                if (i + 1 < n && z[i + 1])
                {
                    int sid = segid[i + 1];
                    g[nid].push_back(sid);
                    g[sid].push_back(nid);
                }
            }
        }

        vector<bool> vis(ttal, false);
        ll ans = 0;

        for (int u = 0; u < ttal; ++u)
        {
            if (!vis[u])
            {
                stack<int> st;
                st.push(u);
                vis[u] = true;
                ll cmp = 0;

                while (!st.empty())
                {
                    int v = st.top();
                    st.pop();
                    if (v < k)
                    {
                        cmp += usize[v];
                    }
                    else if (v < 2 * k)
                    {
                        cmp += dsize[v - k];
                    }
                    else
                    {
                        cmp += 1;
                    }

                    for (int w : g[v])
                    {
                        if (!vis[w])
                        {
                            vis[w] = true;
                            st.push(w);
                        }
                    }
                }
                ans = max(ans, cmp);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}