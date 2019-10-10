/*
 *  给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
*/
#include <stdio.h>

#define INTLEGER_MAX ‭(214748364)
#define INTLEGER_MIN (‭-214748364)
class Solution
{
public:
    int reverse(int x)
    {
        int bit;
        int org = x;
        int result = 0;

        while (org != 0)
        {
            bit = org % 10;
            org = org / 10;
            printf("%d\n", bit);

            if ((result > 214748364)
                ||(result == 214748364)&&(bit>7))
            {
                return 0;
            }
            if ((-result > 214748364)
                ||(result == 214748364)&&(bit>8))
            {
                return 0;
            }

            result = result*10 + bit;
        }
        return result;
    }
};
