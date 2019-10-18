/* 给定两个二进制字符串，返回他们的和（用二进制表示）。
 * 输入为非空字符串且只包含数字 1 和 0
 */
#include <string>

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int maxlength = (a.size() > b.size() ? a.size() + 1 : b.size() + 1);
        string result(maxlength, '0');
        int carry = 0;
        int length = maxlength;
        for (int i = 0; i < maxlength; i++)
        {
            char achar = leaveroot(a, i);
            char bchar = leaveroot(b, i);
            result[maxlength - 1 - i] = (achar - '0' + bchar - '0' + carry) % 2 + '0';
            carry = (achar + bchar + carry - '0' - '0') / 2;
        }
        if (result[0] == '0')
            return result.substr(1);
        else
            return result;
    }
    char leaveroot(string a, int sit)
    {
        if (sit > a.size() - 1)
        {
            return '0';
        }
        else
        {
            return a[a.size() - 1 - sit];
        }
    }
};

/* 294 / 294 个通过测试用例  执行用时 : 12 ms 内存消耗 : 11 MB xxx */
