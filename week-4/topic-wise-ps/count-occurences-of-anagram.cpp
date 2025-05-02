class Solution
{
public:
    int search(string &pat, string &txt)
    {
        int size = pat.size(), n = txt.size();
        int l = 0, r = 0, ans = 0;

        map<char, int> mp;
        for (char x : pat)
        {
            mp[x]++;
        }

        int cnt = mp.size(); 

        while (r < n)
        {
            if (mp.find(txt[r]) != mp.end())
            {
                mp[txt[r]]--;
                if (mp[txt[r]] == 0)
                    cnt--;
            }

            if (r - l + 1 < size)
            {
                r++;
            }
            else if (r - l + 1 == size)
            {
                if (cnt == 0)
                {
                    ans++;
                }

                if (mp.find(txt[l]) != mp.end())
                {
                    mp[txt[l]]++;
                    if (mp[txt[l]] == 1)
                        cnt++;
                }

                l++;
                r++;
            }
        }

        return ans;
    }
};
