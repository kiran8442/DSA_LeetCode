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
        
        ListNode* Temp = head;
        ListNode* Temp2 = nullptr;
        if (head == NULL)
            return head;
        while(Temp->next != NULL) {
            if(Temp->val == Temp->next->val){
                Temp2 = Temp->next;
                Temp->next = Temp2->next;
                delete Temp2;
            }
            else{
                Temp = Temp->next;
            }
        }
        return head;
    }
};