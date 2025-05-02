class Solution
{
public:
    int maximumSumSubarray(vector<int> &arr, int k)
    {
        int l = 0, r = 0;
        long sum = 0, ans = 0;

        while (r < arr.size())
        {
            sum += arr[r];

            if (r - l + 1 < k)
            {
                r++;
            }
            else if (r - l + 1 == k)
            {
                ans = max(ans, sum);
                sum -= arr[l];
                l++;
                r++;
            }
        }
        return ans;
    }
};
