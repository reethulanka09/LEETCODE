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
    ListNode* reverseList(ListNode* head) {
        ListNode* dummy = NULL;
        ListNode* temp = head;
        while(temp){
            ListNode* newNode = new ListNode(temp -> val);
            if(dummy == NULL){
                dummy = newNode;
            }
            else{
                newNode -> next = dummy;
                dummy = newNode;
            }
            temp = temp -> next;
        }
        return dummy;
    }
};