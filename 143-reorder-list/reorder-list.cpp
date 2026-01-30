class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        ////  middle
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        //   Push second half into stack
        stack<ListNode*> st;
        ListNode* curr = slow->next;
        slow->next = nullptr;   // cut first half

        while (curr) {
            st.push(curr);
            curr = curr->next;
        }

         ///merge
        curr = head;
        while (!st.empty()) {
            ListNode* top = st.top();
            st.pop();

            ListNode* next = curr->next;
            curr->next = top;
            top->next = next;

            curr = next;
        }
    }
};
