/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        while(head){
            if(head->val == 1000000){
                return true;
            }

            head->val = 1000000;
            head = head->next;
        }
        return false;
    }
};


// Another solution
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution2 {
public:
    bool hasCycle(ListNode *head) {
        ListNode *first;
        first = head;
        while(first != NULL && first->next != NULL){
            head = head->next;
            first = first->next->next;
            if(first == head){
                return true;
            }
        }
        return false;
    }
};
