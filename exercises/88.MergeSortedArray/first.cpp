/*  给定两个有序整数数组 nums1 和 nums2，将 nums2 合并到 nums1 中，使得 num1 成为一个有序数组。
 *  说明:
 *      初始化 nums1 和 nums2 的元素数量分别为 m 和 n。
 *      你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。
 */
#include <vector>

/* 思路 在正向比较时会出现原本占用问题，因此更换角度，从后向前填充 */

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1, j = n - 1;
        int ri = m + n - 1;
        while (ri >= 0)
        {
            if (i<0)
            {
                nums1[ri--] = nums2[j--];
                continue;
            }
            if (j<0)
            {
                nums1[ri--] = nums1[i--];
                continue;
            }
            if (nums1[i]>nums2[j])
            {
                nums1[ri--] = nums1[i--];
            }
            else
            {
                nums1[ri--] = nums2[j--];
            }
        }
        return;
    }
};

/* 59 / 59 个通过测试用例  执行用时 : 4 ms 内存消耗 : 8.7 MB */
