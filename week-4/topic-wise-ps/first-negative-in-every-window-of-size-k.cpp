class Solution
{
public:
    vector<int> firstNegInt(vector<int> &a, int k)
    {
        int n = a.size();
        deque<int> dq; 
        vector<int> ans;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] < 0)
                dq.push_back(i);

            if (i >= k - 1)
            {
                while (!dq.empty() && dq.front() <= i - k)
                    dq.pop_front();

                if (!dq.empty())
                    ans.push_back(a[dq.front()]);
                else
                    ans.push_back(0);
            }
        }
        return ans;
    }
};
