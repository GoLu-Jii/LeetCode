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

struct Compare {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;  // min-heap based on node value
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;

        for (auto item : lists) {
            while (item) {
                pq.push(item);
                item = item->next;  
            }
        }

        ListNode* head = new ListNode(0);
        ListNode* temp = head;

        while (!pq.empty()) {
            ListNode* node = pq.top();
            pq.pop();

            temp->next = node;
            temp = temp->next;
        }

        temp->next = nullptr;  

        return head->next;
    }
};