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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int,int>mpp;
        ListNode* temp;
        temp = head;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto i:mpp){
            cout<<i.first<<" "<<i.second<<" ";
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        temp = head;
        while(temp!=NULL){
            if(mpp.find(temp->val)==mpp.end()){
                tail->next = new ListNode(temp->val);
                tail=tail->next;
            }
            temp=temp->next;
        }
        return dummy->next;
    }
};