
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1)
            return l2;
        if (!l2)
            return l1;

        if (l1->val <= l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;

        } else {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }

        return NULL;
    }

    ListNode* partionAndMerge(int start, int end, vector<ListNode*>& lists) {
        if (start > end)
            return NULL;
        if (start == end)
            return lists[start];

        // int mid = end - (end - start) / 2;
        int mid = start + (end-start)/2;

        ListNode* l1 = partionAndMerge(start, mid, lists);
        ListNode* l2 = partionAndMerge(mid + 1, end, lists);
        return mergeTwoLists(l1, l2);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = lists.size();

        if (k == 0)
            return NULL;

        return partionAndMerge(0, k - 1, lists);
    }
};