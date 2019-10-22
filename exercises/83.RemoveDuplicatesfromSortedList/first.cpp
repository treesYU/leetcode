/* 给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。 */

#include <stdio.h>
/* Definition for singly-linked list.*/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
            return NULL;
        if (head->next == NULL)
            return head;
        ListNode *base = head;
        ListNode *search = head->next;
        ListNode *result = base;
        for (search = head->next; search != NULL; search = search->next)
        {
            if (base->val != search->val)
            {
                base->next = search;
                base = base->next;
            }
            else
            {
                base->next = search->next;
            }
        }
        return result;
    }
};

/* 165 / 165 个通过测试用例  执行用时 : 16 ms 内存消耗 : 9.3 MB */
