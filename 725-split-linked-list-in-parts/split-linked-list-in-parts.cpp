class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> res(k, nullptr);

         
        int n = 0;
        ListNode* temp = head;
        while (temp) {
            n++;
            temp = temp->next;
        }

        int baseSize = n / k;
        int extra = n % k;

        ListNode* curr = head;

         
        for (int i = 0; i < k && curr != nullptr; i++) {
            res[i] = curr;

            int partSize = baseSize + (extra > 0 ? 1 : 0);
            extra--;

            
            for (int j = 1; j < partSize; j++) {
                curr = curr->next;
            }

           
            ListNode* nextPart = curr->next;
            curr->next = nullptr;
            curr = nextPart;
        }

        return res;
    }
};
