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
        ListNode *p = l1,*q=l2;
        ListNode *dummy = new ListNode(0);
        ListNode* res = dummy;
        
        int sum = 0,carry = 0,unit = 0;
        while(p != NULL || q != NULL || carry){
            int x=0;int y=0;
            int inside_sum = p->val +q->val;
            // if(inside_sum>10){
            //     inside_sum = 0;
            //     carry =1
            // }
            
            // sum+=inside_sum;
            // sum+=carry;
            sum = inside_sum + carry;
            carry = inside_sum/10;
            res->next = new ListNode(sum%10);
            res = res->next;
            
            p = p->next;
            q = q->next;
        }
        return dummy->next;
    }
};
