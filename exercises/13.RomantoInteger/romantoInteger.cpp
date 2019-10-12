/*
 * 罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。
 *      字符          数值
 *      I             1
 *      V             5
 *      X             10
 *      L             50
 *      C             100
 *      D             500
 *      M             1000
 * 例如， 罗马数字 2 写做 II ，即为两个并列的 1。
 *      12 写做 XII ，即为 X + II 。
 *      27 写做 XXVII, 即为 XX + V + II 。
 * 通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4
 *      不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大
 *      数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特
 *      殊的规则只适用于以下六种情况：
 *          I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
 *          X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。
 *          C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
 *
 *
 *      给定一个罗马数字，将其转换成整数。输入确保在 1 到 3999 的范围内。
 */

/* 思路: 默认情况下罗马数字中小的数字在大的数字的右边，可以使用顺序检查。
 *      但当遇到IXC字符时，需判定后续受否为可以与之组合的字符。
 *      I   IV  V   IX  X   XL  L   XC  C   CD  D   CM  M
 *      1   4   5   9   10  40  50  90  100 400 500 900 1000
 */
#include <string>
class Solution
{
public:
    int romanToInt(string s)
    {
        int size = s.size();
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            switch (s[i])
            {
            case 'I':
                if ((i + 1) <= size)
                {
                    if (s[i + 1] == 'V')
                    {
                        sum += 4;
                        i++;
                        break;
                    }
                    else if (s[i + 1] == 'X')
                    {
                        sum += 9;
                        i++;
                        break;
                    }
                }
                sum += 1;
                break;
            case 'V':
                sum += 5;
                break;
            case 'X':
                if ((i + 1) <= size)
                {
                    if (s[i + 1] == 'L')
                    {
                        sum += 40;
                        i++;
                        break;
                    }
                    else if (s[i + 1] == 'C')
                    {
                        sum += 90;
                        i++;
                        break;
                    }
                }
                sum += 10;
                break;
            case 'L':
                sum += 50;
                break;
            case 'C':
                if ((i + 1) <= size)
                {
                    if (s[i + 1] == 'D')
                    {
                        sum += 400;
                        i++;
                        break;
                    }
                    else if (s[i + 1] == 'M')
                    {
                        sum += 900;
                        i++;
                        break;
                    }
                }
                sum += 100;
                break;
            case 'D':
                sum += 500;
                break;
            case 'M':
                sum += 1000;
                break;
            default:
                break;
            }
        }
        return sum;
    }
};

/* 3999 / 3999 个通过测试用例 执行用时 : 12 ms 内存消耗 : 8.3 MB */
