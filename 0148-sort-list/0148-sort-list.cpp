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
    ListNode* mergelist(ListNode* l1,ListNode* l2){
        ListNode* ans=new ListNode(0);
        ListNode* ptr=ans;
        while(l1 and l2){
            if(l1->val<=l2->val){
                ptr->next=l1;
                l1=l1->next;
            }
            else{
                ptr->next=l2;
                l2=l2->next;
            }
            ptr=ptr->next;
        }
        while(l1){
            ptr->next=l1;
            l1=l1->next;
            ptr=ptr->next;
        }
        while(l2){
            ptr->next=l2;
            l2=l2->next;
            ptr=ptr->next;
        }
        return ans->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL or head->next==NULL)return head;
        // for(auto curr=head;curr!=NULL;curr=curr->next){
        //     for(auto j=head;j!=curr;j=j->next){
        //         if(j->val>curr->val){
        //             swap(j->val,curr->val);
        //         }
        //     }
        // }
        // return head;
        //----------------------------------merge sort
        ListNode* prev;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast and fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;
        ListNode* l1=sortList(head);
        ListNode* l2=sortList(slow);
        return mergelist(l1,l2);
    }
};