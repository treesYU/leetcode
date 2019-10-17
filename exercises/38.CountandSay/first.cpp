/* 报数序列是一个整数序列，按照其中的整数的顺序进行报数，得到下一个数。
 * 其前五项如下：
 *      1.     1        1 被读作  "one 1"  ("一个一") , 即 11。
 *      2.     11       11 被读作 "two 1s" ("两个一"）, 即 21。
 *      3.     21       21 被读作 "one 2",  "one 1" （"一个二" ,  "一个一") , 即 1211。
 *      4.     1211
 *      5.     111221
 * 给定一个正整数 n（1 ≤ n ≤ 30），输出报数序列的第 n 项。
 * 注意：整数顺序将表示为一个字符串。
 */
#include <string>
#include <vector>

class Solution
{
public:
    string countAndSay(int n)
    {
        string result;
        vector<string> book = buildCount(n);
        return book[n - 1];
    }
    vector<string> buildCount(int n)
    {
        vector<string> book;
        if (n < 1)
            return book;
        string base = "1";
        string next = "11";
        book.push_back(base);
        book.push_back(next);
        base = next;
        int count = 0;
        for (int i = 3; i <= n; i++)
        {
            next.clear();
            count = 1;
            for (int j = 0; j < base.size(); j++)
            {
                if ((base[j] == base[j + 1]) && (j + 1 < base.size()))
                {

                    count++;
                }
                else
                {

                    next += ('0' + count);
                    next += base[j];
                    count = 1;
                }
            }
            book.push_back(next);
            base = next;
        }
        return book;
    }
};

/* 18 / 18 个通过测试用例 执行用时 : 4 ms 内存消耗 : 8.9 MB */
