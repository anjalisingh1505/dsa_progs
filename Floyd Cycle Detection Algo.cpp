
// Floyd's cycle detection algorithm which helps in finding the loop in a Linked list using a slow pointer and a fast pointer..


#include<bits/stdc++.h>
using namespace std;


struct ListNode
{
    int val;
    struct ListNode *next;
};

int hasCycle(struct ListNode *head)
{
    struct ListNode *ptr1 = head;
    struct ListNode *ptr2 = head;
    while (ptr2 != NULL && ptr2->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
        if (ptr1 == ptr2)
            return 1;
    }
    return 0;
}

int main()
{
    struct ListNode *head = malloc(sizeof(struct ListNode));
    head->val = 2;
    struct ListNode *l1 = malloc(sizeof(struct ListNode));
    l1->val = 8;
    head->next = l1;
    struct ListNode *l2 = malloc(sizeof(struct ListNode));
    l2->val = 3;
    l1->next = l2;
    struct ListNode *l3 = malloc(sizeof(struct ListNode));
    l3->val = 5;
    l2->next = l3;
    struct ListNode *l4 = malloc(sizeof(struct ListNode));
    l4->val = 10;
    l3->next = l4;
    l4->next = l2;
    printf("%d", hasCycle(head));
    return 0;
}
