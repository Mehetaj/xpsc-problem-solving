

class Solution
{
public:
    int longestSubarray(vector<int> &arr, int k)
    {
        int n = arr.size();
        map<int, int> prefix;
        int sum = 0;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];

            if (sum == k)
            {
                mx = max(mx, i + 1);
            }
            int rmv = sum - k;
            if (prefix.find(rmv) != prefix.end())
            {
                int len = i - prefix[rmv];
                mx = max(len, mx);
            }
            if (prefix.find(sum) == prefix.end())
            {
                prefix[sum] = i;
            }
        }
        return mx;
    }
};
