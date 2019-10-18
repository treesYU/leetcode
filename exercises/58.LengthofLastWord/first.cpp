/* 给定一个仅包含大小写字母和空格 ' ' 的字符串，返回其最后一个单词的长度。
 * 如果不存在最后一个单词，请返回 0 。
 * 说明：一个单词是指由字母组成，但不包含任何空格的字符串。
*/
#include <string>

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int length = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {

            if (length == 0 && s[i] == ' ')
            {
                ;
            }
            else if (length == 0 && s[i] != ' ')
            {
                length = 1;
            }
            else if (length != 0 && s[i] != ' ')
            {
                length++;
            }
            else
            {
                break;
            }
        }
        return length;
    }
};

/* 59 / 59 个通过测试用例 执行用时 : 4 ms 内存消耗 : 8.7 MB */
