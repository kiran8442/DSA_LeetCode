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
    void insertlast(ListNode** head, ListNode* node)
    {
        if(head == nullptr || node == nullptr)
            return;
        node->next = nullptr;
        if(*head == nullptr)
        {
            *head = node;
            return;
        }
        node->next = *head;
        *head = node;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* output = nullptr;
        ListNode* run = head;
        ListNode* run_next = nullptr;
        while(run != nullptr)
        {
            run_next = run->next;
            insertlast(&output, run);
            run = run_next;
        }
        return output;
    }
};