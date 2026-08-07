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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr)
            return list2;
        if(list2 == nullptr)
            return list1;
        ListNode* Temp1 = nullptr;
        ListNode* Final = nullptr;
        if(list1->val < list2->val){
            Temp1 = Final  = list1;
            list1 = list1->next;
            Temp1->next = nullptr;
        }
        else {
            Temp1 = Final  = list2;
            list2 = list2->next;
            Temp1->next = nullptr;
        }
        while(list1 != nullptr || list2 != nullptr) {
            if(list1 == nullptr) {
                Temp1->next = list2;
                break;
            }
            else if( list2 == nullptr) {
                Temp1->next = list1;
                break;
            }
            if(list1->val < list2 ->val){
                Temp1->next = list1;
                Temp1 = Temp1->next;
                list1 = list1->next;
                Temp1->next = nullptr;
            }
            else {
                Temp1->next = list2;
                Temp1 = Temp1->next;
                list2 = list2->next;
                Temp1->next = nullptr;
            }
        }
        return Final;
    }
};