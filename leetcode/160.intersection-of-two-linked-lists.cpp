/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
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
    int length(ListNode* head){
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }
    
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        int l1,l2;
        ListNode* ptr1;
        ListNode* ptr2;
        l1=length(head1);
        l2=length(head2); 
        int d=0;
        if(l1>l2){
             d=l1-l2;
             ptr1=head1;
             ptr2=head2;
        }
        else{
            d=l2-l1;
            ptr1=head2;
            ptr2=head1;
        }
        while(d){
            ptr1=ptr1->next;
            if(ptr1==NULL){
                return NULL;
            }
            d--;
        }
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1==ptr2){
                return ptr1;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return NULL;
    }
};
// @lc code=end

