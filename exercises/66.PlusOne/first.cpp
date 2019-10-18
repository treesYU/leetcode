/* 给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。
 * 最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
 * 你可以假设除了整数 0 之外，这个整数不会以零开头。
 */
#include <vector>

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        vector<int> result = digits;
        bool carry = false;
        for (int i = result.size() - 1; i >= 0; i--)
        {
            if (result[i] == 9)
            {
                result[i] = 0;
                carry = true;
            }
            else
            {
                result[i]++;
                carry = false;
                break;
            }
        }
        if (carry == true)
        {
            result.insert(result.begin(),int(1));
        }
        return result;
    }
};

/* 109 / 109 个通过测试用例 执行用时 : 4 ms 内存消耗 : 8.6 MB */
