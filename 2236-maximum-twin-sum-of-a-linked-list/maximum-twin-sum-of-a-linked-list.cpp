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
    int pairSum(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;

        while (temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int result = 0;
        int size = arr.size();

        int i = 1;
        int j = size;

        while (i < j) {
            int sum = arr[i-1] + arr[j-1];

            if (result < sum) {
                result = sum;
            }

            i++;
            j--;
        }

        return result;
    }
};