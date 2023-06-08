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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      
        // Non-Optimized Methord
        int count=0;
        ListNode* temp=head;
        while(temp != NULL)
        {
            count++;
            temp=temp->next;
        }
        int del=count-n;
        if(del == 0)
        {
            ListNode* node=head;
            head=head->next;
            delete(node);
        }
        else
        {
            ListNode* t=head;
            while(del > 1)
            {
                t=t->next;
                del--;
            }
            ListNode* node=t->next;
            t->next=t->next->next;
            delete(node);
        }
        return head;
    }
};