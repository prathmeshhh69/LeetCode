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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>vec;
        if(list1==nullptr && list2==nullptr)return nullptr;
        ListNode* temp=list1;
        while(temp!=nullptr){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        temp=list2;
        while(temp!=nullptr){
            vec.push_back(temp->val);
            temp=temp->next;
        }
        sort(vec.begin(), vec.end());
        ListNode* temphead=new ListNode(vec[0]);
        ListNode* mover=temphead;
        for(int i=1; i<vec.size(); i++){
             ListNode* tempnode=new ListNode(vec[i]);
             mover->next=tempnode;
             mover=mover->next;
        }
        return temphead;
    }
};