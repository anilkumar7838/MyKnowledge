/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* temp=new ListNode(0);
        ListNode* l=temp;
        
        while(l1!=NULL and l2!=NULL){
            if(l1->val < l2->val){
                l->next=l1;
                l1=l1->next;
            }
            else{
                l->next=l2;
                l2=l2->next;
            }
            l=l->next;
        }
        if(l1!=NULL){
            l->next=l1;
        }
        else{
            l->next=l2;
        }
        return temp->next;
    }
};
// @lc code=end

