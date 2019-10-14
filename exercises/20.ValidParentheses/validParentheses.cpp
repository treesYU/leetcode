/* 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
 * 有效字符串需满足：
 *      1.左括号必须用相同类型的右括号闭合。
 *      2.左括号必须以正确的顺序闭合。
 * 注意空字符串可被认为是有效字符串。
 */

/* 从首位开始匹配 直到末尾，遇到 '('，'{'，'['入栈，遇到')'，'}'，']'做出栈
 * 匹配，匹配错误则返无效 */

#include <stack>

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> check;
        if (s.size() == 0)
            return true;
        for (int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
            case '(':
                check.push('(');
                break;
            case '{':
                check.push('{');
                break;
            case '[':
                check.push('[');
                break;
            case '}':
                /* 防止错误出栈 */
                if (check.empty())
                    return false;
                if (check.top() != '{')
                    return false;
                check.pop();
                break;
            case ']':
                if (check.empty())
                    return false;
                if (check.top() != '[')
                    return false;
                check.pop();
                break;
            case ')':
                if (check.empty())
                    return false;
                if (check.top() != '(')
                    return false;
                check.pop();
                break;
            default:
                break;
            }
        }
        /* 空栈才是完全匹配 */
        if (check.empty())
            return true;
        else
            return false;
    }
};

/* 76 / 76 个通过测试用例 执行用时 : 4 ms  内存消耗 : 8.6 MB */
