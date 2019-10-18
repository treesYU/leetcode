/* 假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
 * 每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
 * 注意：给定 n 是一个正整数。
 */

/*  n = 1: 1
    n = 2: 2
    n = (n-1)+(n-2);
    */

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        int nf1 = 2;
        int nf2 = 1;
        int nf = 0;
        for (int i = 3; i < n; i++)
        {
            nf = nf1 + nf2;

            nf2 = nf1;
            nf1 = nf;
        }
        return nf;
    }
};

/* 45 / 45 个通过测试用例  执行用时 : 4 ms 内存消耗 : 8.2 MB */
