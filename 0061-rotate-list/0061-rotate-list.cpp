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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0)
            return head;
        int length=1;
        ListNode*current=head;
        while(current->next != NULL)
        {
            length++;
            current=current->next;
        }
        current->next=head;
        k=k%length;
        k=length-k;
        while(k--)
        {
            current=current->next;
            //k--;
      
        }
        head=current->next;
        current->next=NULL;
        return head;
    }
};