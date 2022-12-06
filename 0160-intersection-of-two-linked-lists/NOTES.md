1. Brute Force -> O(m*n) -- check all the elements one by one

       ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp;
        while(headA!=NULL){
            temp=headB;
            while(temp!=NULL){
                if(temp==headA){
                    return temp;
                }
                temp=temp->next;
            }
            headA=headA->next;
        }
        return 0;
       }
    
2. Hashmap - O(n) + O(m) time, space O(n)

       ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> m;
		while(headA != NULL){
			m[headA]++;
			headA = headA -> next;
		}
		while(headB != NULL){
			if(m[headB] > 0){
				return headB;
			}
			headB = headB -> next;
		}
		return NULL;
       }
    
 3. Optimal
 (a) Find the length of both linked list and take difference then traverse simultaneously.

    int getdiff(ListNode* headA,ListNode* headB){
        int l1=0;
        int l2=0;
        while(headA){
            l1++;
            headA=headA->next;
        }
        while(headB){
            l2++;
            headB=headB->next;
        }
        return l1-l2;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int diff=getdiff(headA,headB);
        if(diff>0){
            while(diff--!=0){
                headA=headA->next;
            }
        }
        else{
            while(diff++!=0){
                headB=headB->next;
            }
        }
        while(headA){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
  
   (b) trick
    
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
           if(headA==NULL or headB==NULL)return NULL;
           ListNode* a=headA;
           ListNode* b=headB;
           // if a and b have different length then we will stop the loop after second iteration
            while(a!=b){
              //for the end of first iteration , we just reset the pointer to the head of another linkedlist
              a=(a==NULL)?headB:a->next;
              b=(b==NULL)?headA:b->next;
            }
            return a;
        }
        
