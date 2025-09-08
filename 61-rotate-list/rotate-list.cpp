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

          if (!head || !head->next || k == 0) return head;

        ListNode* temp1 = head;
        int n = 0;
        while (temp1) {
            n++;
            temp1 = temp1->next;
        }
        int pos = n - (k % n);
        if (pos == n)
            return head;

        cout << pos;
        ListNode* temp2 = head;
        ListNode* prev = head;
        for (int i = 1; i <= pos; i++) {
            prev = temp2;
            temp2 = temp2->next;
        }

        ListNode* first = prev->next;
        prev->next = NULL;

        ListNode* temp3 = first;

        while (temp3->next) {
            temp3 = temp3->next;
        }

        temp3->next = head;

        return first;
    }
};