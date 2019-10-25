/* 给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。
 * 找出那个只出现了一次的元素。
 * 说明：
 * 你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？
 */

#include <vector>

/* 思路 在正向比较时会出现原本占用问题，因此更换角度，从后向前填充 */

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            nums[0] ^= nums[i];
        }
        return nums[0];
    }
};

/* 16 / 16 个通过测试用例  执行用时 : 12 ms 内存消耗 : 9.7 MB */
