/* 实现 int sqrt(int x) 函数。
 * 计算并返回 x 的平方根，其中 x 是非负整数。
 * 由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。
 */

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0)
            return 0;
        else if (x == 1)
            return 1;
        return esqrt(x, 0, x);
    }
    int esqrt(int x, int left, int right)
    {

        int mid = (left + right >> 1);
        if (mid > x / mid)
        {
            if (left + 1 == mid)
                return left;
            else
                return esqrt(x, left, mid);
        }
        else
        {
            if (mid + 1 == right)
                return mid;
            else
                return esqrt(x, mid, right);
        }
    }
};

/* 1017 / 1017 个通过测试用例  执行用时 : 0 ms 内存消耗 : 8.2 MB */
