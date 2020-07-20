// 将两个升序链表合并为一个新的 升序 链表并返回。
// 新链表是通过拼接给定的两个链表的所有节点组成的。 
// 输入：1->2->4, 1->3->4
// 输出：1->1->2->3->4->4

# include <iostream>
# include <vector>
# include "main.h"
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if (!l1) return l2;
    if (!l2) return l1;
    ListNode* mergedHead = nullptr;

    if (l1->val < l2->val)
    {
        mergedHead = l1;
        mergedHead->next = mergeTwoLists(l1->next, l2);
    }
    else
    {
        mergedHead = l2;
        mergedHead->next = mergeTwoLists(l2->next, l1);
    }
    return mergedHead;
}

int test8()
{
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);

    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);

    ListNode* res = mergeTwoLists(l1, l2);

    ListNode* tmp = res;
    while (tmp->next)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    cout << tmp->val << endl;

    return 0;
}