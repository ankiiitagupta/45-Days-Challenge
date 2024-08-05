//middle of the linked list

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
    ListNode* middleNode(ListNode* head) {
        int cnt=1, mid;
        ListNode* q=head;
        while(q->next!=NULL){
            cnt++;
            q=q->next;
        }
        mid=(cnt/2);
        cnt=0;
        ListNode* p=head;
        while(cnt<=mid){
            if(cnt==mid){
                return p;
            }
            p=p->next;
            cnt++;
        }
        p=NULL;
        return p;
    }
};