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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)return head;
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count==n){
            return head->next;
        }
        temp=head;
        count=count-n;
        ListNode* prev=NULL;
        while(count--){
            prev=temp;
            temp=temp->next;
        }
        
        prev->next=temp->next;
        delete temp;
        return head;
    }
};