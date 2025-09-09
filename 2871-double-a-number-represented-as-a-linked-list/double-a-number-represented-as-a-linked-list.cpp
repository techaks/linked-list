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
 ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* nextNode = curr->next; // save next
            curr->next = prev;               // reverse pointer
            prev = curr;                     // move prev forward
            curr = nextNode;                 // move curr forward
        }
        return prev; // new head
    }
    ListNode* doubleIt(ListNode* head) {
        head = reverse(head);

        ListNode* curr = head;
        ListNode* prev = NULL;
        int carry = 0;

        while (curr) {
            int newValue = curr->val * 2 + carry;
            curr->val = newValue % 10;

            if (newValue >= 10) {
                carry = 1;
            } else {
                carry = 0;
            }

            prev = curr;
            curr = curr->next;
        }

        if (carry != 0) {
            ListNode* newHead = new ListNode(carry);
            prev->next = newHead;
        }

        return reverse(head);
    }
        
    
};