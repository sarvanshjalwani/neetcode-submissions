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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* str = head;
        ListNode* end = str->next;
        while(end!=nullptr){
            int g = __gcd(str->val , end->val);
            ListNode* temp = new ListNode(g);
            str->next = temp;
            temp->next = end;
            str = end;
            end = end->next;
        }
        return head;
    }
};