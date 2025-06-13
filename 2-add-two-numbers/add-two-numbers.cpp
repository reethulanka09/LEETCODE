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
        ListNode* temp = l1;
        ListNode* res = l2;
        ListNode* result = NULL;
        ListNode* finall;
        int carry=0;
        while(temp!=NULL && res!=NULL)
        {
            int s = temp->val + res->val + carry;
            ListNode* NN = new ListNode(s%10);
            carry = s/10;
            if(result==NULL)
            {
                result = NN;
                finall = NN;
            }
            else
            {
                finall->next = NN;
                finall = finall->next;
            }
            temp =temp->next;
            res = res->next;
        }
        while(temp!=NULL)
        {  
            if(finall==NULL)
            {
                return temp;
            } 
            else{
            int s = temp->val + carry;
            ListNode* NN = new ListNode(s%10);
            carry = s/10;
                finall->next = NN;
                finall = NN;
            }
            temp =temp->next;
        }
        while(res!=NULL)
        {
            if(finall==NULL)
            {
                return temp;
            } 
            else{
            int s = res->val + carry;
            ListNode* NN = new ListNode(s%10);
            carry = s/10;
                finall->next = NN;
                finall = NN;
            }
            res =res->next;
        }
        if(carry>0)
        {
            ListNode* NN = new ListNode(carry);
            finall->next = NN;
            finall = NN;
        }
        return result;
    }
};