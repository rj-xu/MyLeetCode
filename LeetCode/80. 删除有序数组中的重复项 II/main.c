int removeDuplicates(int *nums, int numsSize)
{
    if (numsSize <= 2)
        return numsSize;

    int l = 2;

    for (int r = 2; r < numsSize; r++)
    {
        if (nums[l - 2] != nums[r])
        {
            nums[l++] = nums[r];
        }
    }

    return l;
}
