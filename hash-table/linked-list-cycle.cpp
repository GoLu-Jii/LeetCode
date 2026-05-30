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
        ListNode* temp = head;
        bool foundcycle = false;
        while(temp-> next != NULL){
            if(temp-> next-> val == INT_MAX){
                foundcycle = true;
                break;
            }
            temp->val = INT_MAX;
            temp = temp->next;
        }
        return foundcycle;
    }
};