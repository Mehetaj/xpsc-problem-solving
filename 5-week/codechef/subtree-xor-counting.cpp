#include <bits/stdc++.h>
using namespace std;
#define ll  long long
const ll mx = 998244353;


ll poww(ll a, ll e) 
{
    ll r = 1;
    a %= mx;
    while (e) {
        if (e & 1) r = r * a % mx;
        a = a * a % mx;
        e >>= 1;
    }
    return r;
}

int main()
{
    

    int t;
    cin >> t;
 
    vector<ll> pK, pD, pB, pE, fPre, fCurr;
    vector<int> par, frq, c;
    vector<vector<int>> adj, child;
    vector<ll> dList, dPrev;

    while (t--) 
    {
        int n;
        ll m;
        cin >> n >> m;
        ll K = (M + 1) % mx;

     
        adj.assign(n+1,{});
        for(int i=0;i<n-1;i++)
        {
            int u,v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

      
        par.assign(n+1,0);
        child.assign(n+1,{});
        queue<int> q;
        par[1] = -1;
        q.push(1);
        while(!q.empty())
        {
            int u = q.front(); q.pop();
            for(int v: adj[u])
            {
                if(par[v]==0)
                {
                    par[v] = u;
                    child[u].push_back(v);
                    q.push(v);
                }
            }
        }

       
        frq.assign(n+1,0);
        c.assign(n+1,0);
        int iCnt = 0;
        for(int u=1;u<=n;u++){
            if(!child[u].empty()){
                iCnt++;
                int cntL = 0;
                for(int v: child[u])
                    if(child[v].empty()) cntL++;
                c[u] = cntL;
                frq[cntL]++;
            }
        }
        
        
        if(iCnt==0)
        {
           
            cout << 0 << "\n";
            continue;
        }

     
        pK.assign(n+1,0);
        pK[0] = 1;
        for(int i=1;i<=n;i++)
            pK[i] = pK[i-1] * K % mx;

    
        int maxd = 0;
        for(int leafCnt=0; leafCnt<=n; leafCnt++)
            if(frq[leafCnt]>0)
                maxd = max(maxd, leafCnt+1);

       
        dList.clear();
        {
            ll D = m;
            while (true) {
                dList.push_back(D);
                if (D==0) break;
                int b = 64 - __builtin_clzll(D);
                D -= (1LL << (b-1));
            }
        }
        dPrev = dList;
        reverse(dPrev.begin(), dPrev.end());

       
        fPre.assign(maxd+1,1);

        ll inv2 = (mx+1)/2;
        
        for(size_t idx=1; idx<dPrev.size(); idx++){
            ll D = dPrev[idx];

           
            pD.assign(maxd+1,0);
            pD[0]=1;
            ll D1 = (D+1)%mx;
            for(int i=1;i<=maxd;i++)
                pD[i] = pD[i-1]*D1 % mx;

            int b = 64 - __builtin_clzll(D);
            ll A_int = 1LL<<(b-1);
            ll A = A_int % mx, invA = poww(A, mx-2);
            ll B_int = (D+1) - A_int, B = (B_int%mx+mx)%mx;
            ll E_int = (1LL<<b) - (D+1),   E = (E_int%mx+mx)%mx;

            
            pB.assign(maxd+1,0);
            pE.assign(maxd+1,0);
            pB[0]=pE[0]=1;
            for(int i=1;i<=maxd;i++){
                pB[i] = pB[i-1]*B % mx;
                pE[i] = pE[i-1]*E % mx;
            }

           
            fCurr.assign(maxd+1,0);
            fCurr[0]=1;
            for(int d=1; d<=maxd; d++){
                
                ll sum_even = (pD[d] + pE[d]) % mx * inv2 % mx;
                if((d&1)==0){
                    ll s1 = (sum_even - pB[d] + mx)%mx * invA % mx;
                    fCurr[d] = (s1 + fPre[d]) % mx;
                } else {
                    fCurr[d] = sum_even * invA % mx;
                }
            }
            fPre.swap(fCurr);
        }

      
        ll full = pK[N], ans = 0;
        for(int leafCnt=0; leafCnt<=n; leafCnt++){
            int cnt = frq[leafCnt];
            if(!cnt) continue;
            int d = leafCnt+1;
            ll Qi = fPre[d];
            
            ll term = (full - pK[N-d]*Qi % mx + mx)%mx;
            ans = (ans + term*cnt) % mx;
        }

        cout << ans << "\n";
    }
    return 0;
}