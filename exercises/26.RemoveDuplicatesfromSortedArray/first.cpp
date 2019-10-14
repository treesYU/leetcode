/*
 * 给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素只出现一次，返
 * 回移除后数组的新长度。
 * 不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件
 * 下完成。
 */
#include <vector>

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int cmp = 0;
        /* 无数据或仅有一项需要考虑 */
        if (nums.size() < 2) return nums.size();
        for (int index = 1; index < nums.size(); index++)
        {
            //printf("%d %d %d %d\n",index,cmp,nums[index],nums[cmp]);
            if (nums[cmp] != nums[index])
            {
                nums[++cmp] = nums[index];
            }
        }
        return cmp+1;
    }
};

/* 161 / 161 个通过测试用例 执行用时 : 28 ms 内存消耗 : 9.8 MB */
