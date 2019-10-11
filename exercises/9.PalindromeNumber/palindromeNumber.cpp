/*
 * 判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
 */
#include <stdio.h>
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        char buf[20] = {0};
        sprintf(buf, "%d", x);
        int size = strlen(buf);
        for (int i = 0; i < size / 2; i++)
        {
            if (buf[i] != buf[size - 1 - i])
                return false;
        }
        return true;
    }
};

/* 执行用时 : 20 ms 内存消耗 : 8 MB */
