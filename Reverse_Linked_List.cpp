#include <bits/stdc++.h> 
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
        {
            return head;
        }
        ListNode *curr=head;
        ListNode *prev=NULL;

        while(curr!=NULL)
        {
            ListNode *temp;
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
};

int main()
{
    // Input
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Output
    Solution ob;
    ListNode *newHead = ob.reverseList(head);
    while(newHead!=NULL)
    {
        cout<<newHead->val<<" ";
        newHead=newHead->next;
    }
    return 0;
}