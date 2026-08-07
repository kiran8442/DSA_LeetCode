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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* Temp = nullptr;
        ListNode *T1 = nullptr, *T2 = nullptr;
        int ino1=0;
        int ino = 1;
        Temp = head;
        while( ino < left){
            Temp = Temp->next;
            ino++;
        }
        T1 = Temp;
        for(int i = left;i < right;i++){
            T2 = Temp;
            for(int j = left + ino1; j < right; j++){
                ino = T2->val;
                T2->val = T2->next->val;
                T2->next->val = ino; 
                T2 = T2->next;
            }
            ino1++;
            T1 = T1->next;
        }
        return head;
    }
};