/*
 * 给定一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素，返回移除后数组的新长度。
 * 不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
 * 元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
 */
#include <vector>

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cmp = 0;
        for (int index = 0; index < nums.size(); index++)
        {
            if (nums[index] != val)
            {
                nums[cmp++] = nums[index];
            }
        }
        return cmp;
    }
};


/* 113 / 113 个通过测试用例 执行用时 : 4 ms 内存消耗 : 8.6 MB */
