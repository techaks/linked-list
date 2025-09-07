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
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;

        if (head == NULL)
            return false;

        while (temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int size = arr.size();
        
 int temp1 = size-1 ;
        for (int i = 0; i < size / 2; i++) {
           
            if (arr[i] == arr[temp1]) {
                temp1--;
            } else {
                return false;
            }
        }

        return true;
    }
};