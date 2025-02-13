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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp1, *temp;
        if(!head || head->next == NULL){
            return head;
        }

        temp = head->next;
        if(head->next->next){
         temp1 = head->next->next;
        }
        temp->next = head;
        head->next = NULL;
        head = temp;
        
        while(temp1){
            temp = temp1;
            temp1 = temp1->next;
            temp->next = head;
            head = temp;
        }

        return head;
    }
};
