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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>st1;
        stack<int>st2;


        while(l1!=NULL){
            st1.push(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL){
            st2.push(l2->val);
            l2=l2->next;
        }  //store
        vector<int>ans;
        int carry=0;


        while( !(st1.empty()) && !(st2.empty()) ){
            
            int sum=st1.top()+st2.top()+carry; 
            if(sum<10){
                ans.push_back(sum); 
                carry=0;
            }
            else{ 
                int digit=sum%10;
                carry=sum/10;
                ans.push_back(digit);
            }
            
            st1.pop();st2.pop();
        }


        
        if(!(st1.empty())){
            while(!(st1.empty())){
                
                int sum=st1.top()+carry;
                if(sum<10){
                    ans.push_back(sum);
                    carry=0;
                }
                else{
                    int digit=sum%10;
                    carry=sum/10;
                    ans.push_back(digit);
                } 
                 
                st1.pop();
            }
        }
        else{
            while(!(st2.empty())){
                
                int sum=st2.top()+carry;
                if(sum<10){
                    ans.push_back(sum);
                    carry=0;
                }
                else{
                    int digit=sum%10;
                    carry=sum/10;
                    ans.push_back(digit);
                } 
                 
                st2.pop();
            }
        }
        if(carry>0){
            ans.push_back(carry);
        }

        ListNode* head=NULL;
       for(int i=0;i<ans.size();i++){
            ListNode* temp=new ListNode(ans[i]);
            temp->next=head;
            head=temp;


        }
        
        
        return head; 
    }
};