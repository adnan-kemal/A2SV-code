
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len=0;
        ListNode* cur=head;
        while(cur!=NULL){
            len++;                  
            cur=cur->next;
        }
		
        len=(int)(len/2);  
        cur=head;
        while(len>0){
            cur=cur->next;   
            len--;
        }
        return cur;
    }
};