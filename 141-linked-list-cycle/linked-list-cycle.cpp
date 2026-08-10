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
        ListNode* fast_run = head;
        ListNode* slow_run = head;
        if(fast_run != nullptr)
            fast_run = fast_run->next;
        while(fast_run != nullptr)
        {
            if(fast_run == slow_run)
                return true;
            slow_run = slow_run->next;
            fast_run = fast_run->next;
            if(fast_run != nullptr)
                fast_run = fast_run->next;
            else 
                break;
        }
        return false;
    }
};