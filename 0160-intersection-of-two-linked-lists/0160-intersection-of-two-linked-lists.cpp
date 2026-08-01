/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *first = headA;
        ListNode *second = headB;
        unordered_set<ListNode*> visited;
        while(first != NULL){
            visited.insert(first);
            first = first->next;
        }
        while(second != NULL){
            if(visited.count(second)){
                return second;
            }
            else second = second->next;
        }
    return NULL;
    }
};