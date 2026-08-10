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
    ListNode* rotateRight(ListNode* head, int k) {
        int index = 0;
        if(head == nullptr || head->next == nullptr)
            return head;
        int size = 0;
        ListNode* temp = head;
        while(temp != nullptr)
        {    
            temp = temp->next;
            size++;
        }
        k = k % size;
        while(index < k)
        {
            ListNode* run = head;
            ListNode* run_prev = head;

            while(run->next != nullptr)
            {
                run_prev = run;
                run = run->next;
            }
            run_prev->next = nullptr;
            run->next = head;
            head = run;
            index++;
        } 
        return head;
    }
};