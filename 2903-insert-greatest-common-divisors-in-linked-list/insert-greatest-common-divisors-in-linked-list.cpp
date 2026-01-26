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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;

        while (temp->next) {
            ListNode* curr = new ListNode(0);
            int one = temp->val;
            int two = temp->next->val;
            int hcf = gcd(one, two);
            curr->val = hcf;
            curr->next = temp->next;
            temp->next = curr;
            temp = temp->next->next;
        }

        return head;
    }
};