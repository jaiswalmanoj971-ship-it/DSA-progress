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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempa=headA;

        while(tempa!=NULL){

            ListNode* tempb=headB;
            while(tempb!=NULL){
                if(tempa==tempb) return tempb;
                tempb=tempb->next;
            }
            tempa=tempa->next;
        }
         
         return NULL;
    }
};