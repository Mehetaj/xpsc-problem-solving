#include <bits/stdc++.h>
using namespace std;
#define ll long long

int A[21];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
    {
        memset(A, 0, sizeof(A));
        int n, W;
        cin >> n >> W;
        
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            int tmp = 0;
            while (a > 0)
            {
                tmp++;
                a /= 2;
            }
            A[tmp]++;
        }
        
        int cnt = 0;
        while (true)
        {
            int tmp = W;
            bool ccan = false;

            for (int i = 20; i >= 1; i--)
            {
                int size = (1 << (i - 1)); 
                while (A[i] > 0 && tmp >= size)
                {
                    tmp -= size;
                    A[i]--;
                    ccan = true;
                }
            }
            
            if (!ccan)
                break;
            
            cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
