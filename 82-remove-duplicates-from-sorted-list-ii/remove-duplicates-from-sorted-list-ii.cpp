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

        if(head == NULL || head->next == NULL) return head;
    
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* ans = dummy;
        ListNode* temp = head;
        

         while(temp!=NULL && temp->next!=NULL){
            
            if(temp->val==temp->next->val){
                while(temp->next!=NULL &&
                    temp->val==temp->next->val){
                    temp=temp->next;
                }
                ans->next=temp->next;
            }
            else{
                ans=ans->next;
            }
            temp=temp->next;
        }
        return dummy->next;
    }
};