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
        int length=0;
        if(head==nullptr)return head;
        if(head->next==nullptr){
            head=nullptr;
            return head;
        }
        ListNode* temp=head;
        while(temp!=nullptr){
            length++;
            temp=temp->next;
        }
        if(n==length){
            ListNode* toDelete=head;
            head=head->next;
            delete toDelete;
            return head;
        }
        int endn=length-n+1;
        ListNode* temp2=head;
    for (int lcount = 1; lcount < endn - 1; lcount++) {
            temp2 = temp2->next;
        }
        ListNode* toDelete=temp2->next;
        temp2->next=temp2->next->next;
        delete toDelete;
        
        return head;
    }
};