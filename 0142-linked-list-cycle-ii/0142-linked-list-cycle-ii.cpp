/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        bool cycle=false;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                cycle=true;
                break;
            }
        }
        fast=head;
        if(cycle==true)
        {
            while(fast!=slow)
            {
            fast=fast->next;
            slow=slow->next;
            }
        return slow;
        }
        else
            return NULL;
    }
};