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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1)
            return head;
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;
        
        int count = 0;
        while (head != nullptr) {
            count++;
            head = head->next;
        }
        
        while (count >= k) {
            ListNode* next_group = curr->next;
            ListNode* prev_node = curr;
            
            for (int i = 1; i < k; i++) {
                ListNode* temp = next_group->next;
                next_group->next = curr;
                curr = next_group;
                next_group = temp;
            }
            
            prev->next = curr;
            prev_node->next = next_group;
            prev = prev_node;
            curr = next_group;
            count -= k;
        }
        
        return dummy->next;
    }
};
