/*
 * 给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
 * 进阶:如果你已经实现复杂度为 O(n) 的解法，尝试使用更为精妙的分治法求解。
 */

/* 思路：1.从起始节点开始，计算当起始前节点到当前节点的最大值，保存最大结果 */

#include <vector>

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int max = nums[0];
        int sum = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (sum < 0)
            {   // 累计无增益，重新计算
                sum = nums[i];
            }
            else
            {
                sum += nums[i];
            }

            if (max < sum)
            {
                max = sum;
            }
        }
        return max;
    }
};

/* 202 / 202 个通过测试用例 执行用时 : 8 ms 内存消耗 : 9.3 MB */
