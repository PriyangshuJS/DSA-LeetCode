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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int count=0;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            count++;
        }
        if(count%2==0)
        {
            for(int j=0; j<(count/2); j++)
            {
                head=head->next;
            }
        }
        else
        {
            for(int j=0; j<(count/2)+1; j++)
            {
                head=head->next;
            }
        }
        return head;
    }
};