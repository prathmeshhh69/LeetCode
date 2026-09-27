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
        unordered_map<int,int>mpp;
        ListNode* temp=head;
        ListNode* dummy=new ListNode(0);
        ListNode* tail=dummy;

        while(temp!=nullptr){
            mpp[temp->val]++;
            temp=temp->next;
        }
        temp=head;
        while(temp!=nullptr){
            if(mpp[temp->val]==1){
                tail->next=temp;
                tail=temp;
            }
            temp=temp->next;
        }
        tail->next=nullptr;
        return dummy->next;
    }
};