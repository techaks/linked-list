
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int, int> mp;

        ListNode* tempHead = head;
        while (tempHead) {
            mp[tempHead->val]++;
            tempHead = tempHead->next;
        }

        ListNode* newHead = new ListNode(0);
        ListNode* result = newHead;

        while (head) {
            if (mp[head->val] == 1) {
                newHead->next = head;
                newHead = newHead->next;
            }
            head = head->next;
        }
        newHead->next=NULL;

        return result->next;
    }
};