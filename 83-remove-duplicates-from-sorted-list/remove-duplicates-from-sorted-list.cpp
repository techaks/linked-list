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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        ListNode* newL = new ListNode(-111);
        ListNode* r = newL;

        while(temp){
            if(temp->val != newL->val){
                newL->next=temp;
                newL=newL->next;
            }
            temp=temp->next;
        }

        newL->next=NULL;

        return r->next;
        
        
    }
};