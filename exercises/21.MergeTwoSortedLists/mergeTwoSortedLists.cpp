/*
 * 将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
 */
#include <stdio>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        bool sort;
        ListNode *result = NULL;
        ListNode *index = NULL;
        ListNode *search1 = l1;
        ListNode *search2 = l2;
        ListNode *add;
        if (search1 == NULL)
            return l2;
        if (search2 == NULL)
            return l1;

        if ((search1 != NULL) && (search1->next != NULL))
        {
            if (search1->val > search1->next->val)
            {
                sort = true;
            }
            else
            {
                sort = false;
            }
        }
        else
        {
            if ((search2 != NULL) && (search2->next != NULL))
            {
                if (search2->val > search2->next->val)
                {
                    sort = true;
                }
                else
                {
                    sort = false;
                }
            }
        }


        while ((search1 != NULL) || (search2 != NULL))
        {
            add == NULL;
            if (search1 == NULL)
            {
                add = search2;
                search2 = search2->next;
            }
            else if (search2 == NULL)
            {
                add = search1;
                search1 = search1->next;
            }
            else if ((search1 != NULL) && (search2 != NULL))
            {
                if ((search1->val > search2->val) == (sort == true))
                {
                    add = search1;
                    search1 = search1->next;
                }
                else
                {
                    add = search2;
                    search2 = search2->next;
                }
            }
            if (add != NULL)
            {
                if (result == NULL)
                {
                    result = new ListNode(add->val);
                    index = result;
                }
                else
                {
                    ListNode * temp = new ListNode(add->val);
                    index->next = temp;
                    index = index->next;
                }
            }
        }
        return result;
    }
};

/* 208 / 208 个通过测试用例 执行用时 : 12 ms 内存消耗 : 9 MB */
