int removeElement(int* nums, int numsSize, int val){
    int l = 0;
    int r = 0;

    for (;r< numsSize;r++)
    {
        if(nums[r] != val)
        {
            nums[l++] = nums[r];
        }
    }

    return l;
}
