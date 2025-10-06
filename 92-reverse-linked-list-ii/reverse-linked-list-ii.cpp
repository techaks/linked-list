
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL || left == right)
            return head;

        ListNode* start = NULL;
        ListNode* curr = head;
        ListNode* res = curr;

        for (int i = 1; i < left; i++) {
            start = curr;
            curr = curr->next;
        }
        ListNode* prev = NULL;
        ListNode* last = curr;

        ListNode* firstRev = NULL;
        ListNode* temp = NULL;
        for (int i = 0; i <= right - left; i++) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        if (start)
            start->next = prev;
        else
            res = prev;

        last->next = curr;

        return res;
    }
};