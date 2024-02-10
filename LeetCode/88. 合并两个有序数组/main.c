// 88. 合并两个有序数组
// 已解答
// 简单
// 相关标签
// 相关企业
// 提示
// 给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。

// 请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。

// 注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。

// 示例 1：

// 输入：nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// 输出：[1,2,2,3,5,6]
// 解释：需要合并 [1,2,3] 和 [2,5,6] 。
// 合并结果是 [1,2,2,3,5,6] ，其中斜体加粗标注的为 nums1 中的元素。
// 示例 2：

// 输入：nums1 = [1], m = 1, nums2 = [], n = 0
// 输出：[1]
// 解释：需要合并 [1] 和 [] 。
// 合并结果是 [1] 。

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

void merge2(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int p1 = 0;
    int p2 = 0;
    int rc[m + n];
    while (p1 < m || p2 < n)
    {
        int temp = 0;
        if (p1 == m)
        {
            temp = nums2[p2++];
        }
        else if (p2 == n)
        {
            temp = nums1[p1++];
        }
        else if (nums1[p1] < nums2[p2])
        {
            temp = nums1[p1++];
        }
        else
        {
            temp = nums2[p2++];
        }

        rc[p1 + p2 - 1] = temp;
    }

    for (int i = 0; i < m + n; i++)
    {
        nums1[i] = rc[i];
    }
}
