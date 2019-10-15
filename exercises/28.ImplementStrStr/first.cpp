/* 实现 strStr() 函数。
 * 给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle
 * 字符串出现的第一个位置 (从0开始)。如果不存在，则返回  -1。
 */
#include <string>

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if (needle.size() == 0)
            return 0;
        if (haystack.size() == 0)
            return -1;

        int slength = haystack.size();
        int nlength = needle.size();

        if (nlength > slength)
            return -1;
        int index;
        bool check = false;
        for (index = 0; index < slength; index++)
        {
            if (haystack[index] == needle[0])
            {
                if (slength - index < nlength)
                    return -1;
                if (memcmp(&haystack[index], &needle[0], nlength) == 0)
                {
                    return index;
                }
            }
        }
        return -1;
    }
};

/* 74 / 74 个通过测试用例 执行用时 : 8 ms 内存消耗 : 9 MB */
