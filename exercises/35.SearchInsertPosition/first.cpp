/* 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不
 * 存在于数组中，返回它将会被按顺序插入的位置。
 * 你可以假设数组中无重复元素。 */
#include <vector>

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        if (target <= nums[0])
            return 0;
        int length = nums.size();
        if (target > nums[length - 1])
            return length;
        for (int index = 0; index < length; index++)
        {
            if (nums[index] >= target)
            {
                return index;
            }
        }
        return length;
    }
};

/* 62 / 62 个通过测试用例 执行用时 : 8 ms 内存消耗 : 8.9 MB */
