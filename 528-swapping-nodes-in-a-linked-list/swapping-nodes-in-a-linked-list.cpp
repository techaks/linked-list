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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int n = 0;

        while(temp){
            n++;
            temp=temp->next;
        }

        int first = k;
        int second = n-k+1;

        ListNode* firstNode = NULL;
        ListNode* secondNode = NULL;
        
        ListNode* temp2  = head;
        for (int i = 1 ; i<=first ; i++){
            firstNode = temp2 ;
            temp2=temp2->next;
        }

         ListNode* temp3  = head;
        for (int i = 1 ; i<=second ; i++){
            secondNode = temp3 ;
            temp3=temp3->next;
        }



        swap(firstNode->val ,secondNode->val);

        return head;


        
    }
};