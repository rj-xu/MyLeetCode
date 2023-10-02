#include "stdc.h"

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int p = 0;
    int p1 = 0;
    int p2 = 0;

    int *nums3 = NULL;
    int p3 = 0;

    int *nums = malloc(sizeof(int) * (m + n));

    while (p1 < m && p2 < nums2Size)
    {
        nums[p++] = nums1[p1] < nums2[p2] ? nums1[p1++] : nums2[p2++];
    }

    if (p1 == m)
    {
        nums3 = nums2;
        p3 = p2;
    }
    else
    {
        nums3 = nums1;
        p3 = p1;
    }
    while (p < m + n)
    {
        nums[p++] = nums3[p3++];
    }

    for (int i = 0; i < m + n; i++)
    {
        nums1[i] = nums[i];
    }
}
