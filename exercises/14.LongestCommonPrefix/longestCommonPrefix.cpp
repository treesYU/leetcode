/*
 * 编写一个函数来查找字符串数组中的最长公共前缀。如果不存在公共前缀，返回空字符串 ""。
 * 所有输入只包含小写字母 a-z 。
 */

/* 思路: 从所有字符串首位开始比较，不同则返回 */

#include <string>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string result;
        if (strs.size() == 0)
            return result;
        int maxlenth = 2048;
        for (int i = 0; i < strs.size(); i++)
        {
            if (strs[i].size() < maxlenth)
            {
                maxlenth = strs[i].size();
            }
        }
        int index;
        char c;
        for (int j = 0; j < maxlenth; j++)
        {
            c = strs[0][j];
            for (int i = 1; i < strs.size(); i++)
            {
                if (strs[i][j] != c)
                    return result;
            }
            result.push_back(c);
        }

        return result;
    }
};

/* 118 / 118 个通过测试用例 执行用时 : 8 ms  内存消耗 : 8.8 MB */
