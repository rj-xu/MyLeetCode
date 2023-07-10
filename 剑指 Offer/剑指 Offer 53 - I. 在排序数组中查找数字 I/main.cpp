class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        int m = 0;

        while (l <= r)
        {
            m = (l + r) / 2;
            if (nums[m] < target)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }

        int rc_l = l;

        l = m;
        r = nums.size() - 1;
        while (l <= r)
        {
            m = (l + r) / 2;
            if (nums[m] <= target)
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }

        int rc_r = r;

        return (rc_r - rc_l + 1);
    }
};
